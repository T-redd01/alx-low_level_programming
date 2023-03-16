#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_args - checks arg 1 and 2 is digit
 * @argv: argv from main function
 * Return: 1 if not dig 0 otherwise
 */
int check_args(char **argv)
{
	int i, j;

	for (i = 1; i < 3; i++)
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] < 48 || argv[i][j] > 57)
				return (1);
	return (0);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of args given
 * @argv: 2d arr of args given of char type
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	unsigned long res;

	if (argc != 3 || check_args(argv))
	{
		puts("Error\n");
		exit(98);
	}

	res = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", res);

	return (0);
}

