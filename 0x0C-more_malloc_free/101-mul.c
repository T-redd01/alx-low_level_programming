#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_args - checks arg 1 and 2 is digit
 * @arg1: argv[1]
 * @arg2: argv[2]
 * Return: 1 if not dig 0 otherwise
 */
int check_args(char *arg1, char *arg2)
{
	if (*arg1 < '0' || *arg1 > '9')
		return (1);
	if (*arg2 < '0' || *arg2 > '9')
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

	if (argc != 3 || check_args(argv[1], argv[2]))
	{
		puts("Error\n");
		exit(98);
	}

	res = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", res);

	return (0);
}

