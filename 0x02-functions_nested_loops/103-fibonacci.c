#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, k, n, x;

	j = 1;
	k = 2;
	while (1)
	{
		if (k > 4000000)
		{
			break;
		}
		else if (k % 2 == 0)
		{
			x += k;
		}
		n = j + k;
		j = k;
		k = n;
	}
	printf("%d\n", x);
	return (0);
}
