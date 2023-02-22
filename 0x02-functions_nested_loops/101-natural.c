#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			x += i;
		}
		else if (i % 5 == 0)
		{
			x += i;
		}
	}
	printf("%d", x);
	return (0);
}
