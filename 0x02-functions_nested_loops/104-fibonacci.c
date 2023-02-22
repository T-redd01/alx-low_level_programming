#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long unsigned int i, j, k, n;

	j = 1;
	k = 2;
	for (i = 1; i <= 98; ++i)
	{
		printf("%lu, ", j);
		n = j + k;
		j = k;
		k = n;
	}
	return (0);
}

