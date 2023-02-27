#include "main.h"

/**
 * puts2 - prints odd char
 * @str: address of 1st char
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

