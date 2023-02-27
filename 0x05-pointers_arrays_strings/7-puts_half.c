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
	i -= 1;
	j = i;

	if (i % 2 == 0)
	{
		j /= 2;
		for (; j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		j = (i - 1) / 2;
		for (; j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}

