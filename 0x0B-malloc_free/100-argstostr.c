#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of
 * a program.
 * @ac: total arguments.
 * @av: command line args.
 *
 * Return: pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *conargs;
	int i, j, avlength, k;

	for (avlength = i = 0; i < ac; i++)
	{
		if (ac == 0 || av[i] == NULL)
		{
			return (NULL);
		}

		for (j = 0; av[i][j] != '\0'; j++)
		{
			avlength++;
		}

		avlength++;
	}

	conargs = malloc((avlength + 1) * sizeof(char));
	if (conargs == NULL)
	{
		free(conargs);
		return (NULL);
	}

	for (i = j = k = 0; k < avlength; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			conargs[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < avlength - 1)
			conargs[k] = av[i][j];
	}
	conargs[k] = '\0';

	return (conargs);
}

