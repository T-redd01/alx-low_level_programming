#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural nums till 98
 * @n: starting num
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
				n++;
			}
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
				n--;
			}
		}
	}
}
