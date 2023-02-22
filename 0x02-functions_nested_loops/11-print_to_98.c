#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural nums till 98
 * @i: starting num
 *
 */
void print_to_98(int n)
{
	if (i <= 98)
	{
		while (i <= 98)
		{
			if (i == 98)
			{
				printf("%d", i);
				break;
			}
			else
			{
				printf("%d, ", i);
				i++;
			}
		}
	}
	else
	{
		while (i >= 98)
		{
			if (i == 98)
			{
				printf("%d", i);
				break;
			}
			else
			{
				printf("%d, ", i);
				i--;
			}
		}
	}
	_putchar('\n');
}
