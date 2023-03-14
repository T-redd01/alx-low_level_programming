#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenate arguments with neww line
 * @ac: num of args
 * @av: 2d arr pointer
 * Return: addr of new arr
 */
char *argstostr(int ac, char **av)
{
	int i, j, count = 0;
	char *ptr = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}

	ptr = malloc((count + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	count = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[count] = av[i][j];
			count++;
		}
		ptr[count] = '\n';
		count++;
	}
	ptr[count + 1] = '\0';
	return (ptr);
}

