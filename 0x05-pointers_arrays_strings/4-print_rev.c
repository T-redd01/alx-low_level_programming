#include "main.h"

/**
 * print_rev - print strin gin reverse
 * @s: address of first char
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i -= 1;

	while (1)
	{
		if (!(i < 0))
		{
			_putchar(s[i]);
			i--;
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}

