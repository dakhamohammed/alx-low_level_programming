#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <syst/types.h>
#include <syst/stat.h>
#include <fcntl.h>
#include <elf.h>

void print_address(char *magicp);
void print_type(char *magicp);
void print_osabi(char *magicp);
void print_version(char *magicp);
void print_data(char *magicp);
void print_magic(char *magicp);
void check_sys_ver(char *magicp);
int check_elf(char *magicp)

/**
 * main - entry point.
 * @argc: command line arguments number.
 * @argv: command line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char magicp[27];
	int fd, return_read;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);
	return_read = read(fd, magicp, 27);

	if (return_read == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if (!check_elf(magicp))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}

	check_sys_ver(magicp);
	close(fd);

	return (0);
}

/**
 * print_address - function that prints address
 * @magicp: magic pointer.
 *
 * Return: void, no return.
 */
void print_address(char *magicp)
{
	int i, bg;
	char syst;

	printf("  Entry point address:               0x");

	syst = magicp[4] + '0';
	if (syst == '1')
	{
		bg = 26;
		printf("80");
		for (i = bg; i >= 22; i--)
		{
			if (magicp[i] > 0)
			{
				printf("%x", magicp[i]);
			}
			else if (magicp[i] < 0)
			{
				printf("%x", 256 + magicp[i]);
			}
		}
		if (magicp[7] == 6)
		{
			printf("00");
		}
	}

	if (syst == '2')
	{
		bg = 26;
		for (i = bg; i > 23; i--)
		{
			if (magicp[i] >= 0)
			{
				printf("%02x", magicp[i]);
			}

			else if (magicp[i] < 0)
			{
				printf("%02x", 256 + magicp[i]);
			}

		}
	}
	printf("\n");
}

/**
 * print_type - prints type
 * @magicp: magic pointer.
 *
 * Return: void, no return.
 */
void print_type(char *magicp)
{
	char type = magicp[16];

	if (magicp[5] == 1)
	{
		type = magicp[16];
	}
	else
	{
		type = magicp[17];
	}

	printf("  Type:                              ");
	if (type == 0)
	{
		printf("NONE (No file type)\n");
	}
	else if (type == 1)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (type == 2)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (type == 3)
	{
		printf("DYN (Shared object file)\n");
	}
	else if (type == 4)
	{
		printf("CORE (Core file)\n");
	}
	else
	{
		printf("<unknown: %x>\n", type);
	}
}

/**
 * print_osabi - function that prints osabi.
 * @magicp: magic pointer.
 *
 * Return: viod, no return.
 */
void print_osabi(char *magicp)
{
	char osabi = magicp[7];

	printf("  OS/ABI:                            ");
	
	if (osabi == 0)
	{
		printf("UNIX - systtem V\n");
	}
	else if (osabi == 2)
	{
		printf("UNIX - NetBSD\n");
	}
	else if (osabi == 6)
	{
		printf("UNIX - Solaris\n");
	}
	else
	{
		printf("<unknown: %x>\n", osabi);
	}

	printf("  ABI Version:                       %d\n", magicp[8]);
}


/**
 * print_version - function that prints version.
 * @magicp: magic pointer.
 *
 * Return: void, no return.
 */
void print_version(char *magicp)
{
	int version = magicp[6];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
	{
		printf(" (current)");
	}

	printf("\n");
}
/**
 * print_data - function that prints data.
 * @magicp: magic pointer.
 *
 * Return: void, no return.
 */
void print_data(char *magicp)
{
	char data = magicp[5];

	printf("  Data:                              2's complement");

	if (data == 1)
	{
		printf(", little endian\n");
	}

	if (data == 2)
	{
		printf(", big endian\n");
	}
}
/**
 * print_magic - function that prints magic info.
 * @magicp: magic pointer.
 *
 * Return: void, no return.
 */
void print_magic(char *magicp)
{
	int bytes;

	printf("  Magic:  ");

	for (bytes = 0; bytes < 16; bytes++)
	{
		printf(" %02x", magicp[bytes]);
	}

	printf("\n");

}

/**
 * check_syst - function that check the systtem version.
 * @magicp: magic pointer.
 *
 * Return: void, no return.
 */
void check_sys_ver(char *magicp)
{
	char syst = magicp[4] + '0';

	if (syst == '0')
	{
		exit(98);
	}

	printf("ELF Header:\n");
	
	print_magic(magicp);

	if (syst == '1')
	{
		printf("  Class:                             ELF32\n");
	}

	if (syst == '2')
	{
		printf("  Class:                             ELF64\n");
	}

	print_data(magicp);
	print_version(magicp);
	print_osabi(magicp);
	print_type(magicp);
	print_address(magicp);
}

/**
 * check_elf - function that check if it is an elf file.
 * @magicp: magic pointer.
 *
 * Return: 1 if it is an elf file. 0 if not.
 */
int check_elf(char *magicp)
{
	char E = magicp[1], L = magicp[2], F = magicp[3];
	int address = (int)magicp[0];

	if (address == 127 && E == 'E' && L == 'L' && F == 'F')
	{
		return (1);
	}

	return (0);
}

