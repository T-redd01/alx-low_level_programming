#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 101 */
/**
 * exit_case - checks for incorrect vals
 * @argc: num of args
 * @argv: 2d arr of args
 * Return: 1 if incorrect 0 othwerwise
 */
int exit_case(int argc, char **argv)
{
	int i, j;

	if (argc != 3)
		return (1);

	for (i = 1; i < 3; i++)
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
	return (0);
}

/**
 * put_nums - prints nums to screen
 * @res: addr of res arr
 * @size: size of arr
 */
void put_nums(int *res, int size)
{
	int i, val = 0;

	for (i = 0; i < (size - 1); i++)
	{
		if (res[i])
			val = 1;
		if (val)
			putchar(res[i] + '0');
	}
	if (!val)
		putchar('0');
	putchar('\n');
}

/**
 * main - Entry point
 * @argc: number of args passed to console
 * @argv: 2d arr of args passed to console
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int num1len, num2len, size, i, dig1, dig2, tmp;
	int *res;

	num1 = argv[1], num2 = argv[2];
	if (exit_case(argc, argv))
	{
		printf("Error\n");
		exit(98);
	}
	num1len = strlen(num1);
	num2len = strlen(num2);
	size = num1len + num2len + 1;
	res = malloc(size * sizeof(int));
	if (!res)
		return (1);

	for (i = 0; i < (num1len + num2len); i++)
		res[i] = 0;

	for (num1len = (num1len - 1); num1len >= 0; num1len--)
	{
		dig1 = num1[num1len] - '0';
		tmp = 0;
		for (num2len = (strlen(num2) - 1); num2len >= 0; num2len--)
		{
			dig2 = num2[num2len] - '0';
			tmp += res[num1len + num2len + 1] + (dig1 * dig2);
			res[num1len + num2len + 1] = tmp % 10;
			tmp /= 10;
		}
		if (tmp > 0)
			res[num1len + num2len + 1] += tmp;
	}
	put_nums(res, size);
	free(res);
	return (0);
}

