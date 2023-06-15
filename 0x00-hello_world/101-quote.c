#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	/**
	 * I mean char quote[] but because betty shows this error line 81 I rem e
	 */
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quot, 59);
	return (1);
}

