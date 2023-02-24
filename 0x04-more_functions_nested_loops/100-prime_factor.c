#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	long int n, x, i;

	x = 612852475143
	while (n % 2 == 0)
	{
		x = 2;
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			x = i;
			n = n / i;
		}
	}

	if (n > 2 && n % 2 != 0)
		x = n;

	printf("%d\n", x);
	return (0);
}
