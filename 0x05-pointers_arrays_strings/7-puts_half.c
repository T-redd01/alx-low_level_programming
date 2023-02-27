#include "main.h"

/**
 * puts_half - print second even half of arr
 * @str: address of 1st element
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (i - 1) / 2; j < i - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}

