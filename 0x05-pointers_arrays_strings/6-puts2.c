#include "main.h"

/**
 * puts2 - prints odd char
 * @str: address of 1st char
 */
void puts2(char *str)
{
	int i, x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	for (i = 0; i < x; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

