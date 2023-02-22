#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j	= 1, k = 2;
	int n = j + k;

	printf("%d, %d, ", j, k);
	for (i = 3; i <= 50; ++i)
	{
		if (i == 50)
		{
			printf("%d\n", n);
		}
		else
		{
			printf("%d, ", n);
			j = k;
			k = n;
			n = j + k;
		}
	}
	return (0);
}
