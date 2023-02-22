#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, x, y, z, n;

	j = 1;
	k = 2;
	printf("%lu", j);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}
	x = j / 1000000000;
	y = j % 1000000000;
	z = k / 1000000000;
	n = k % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", z + (n / 1000000000));
		printf("%lu", n % 1000000000);
		z = z + x;
		x = z - x;
		n = n + y;
		y = n - y;
	}
	printf("\n");
	return (0);
}
