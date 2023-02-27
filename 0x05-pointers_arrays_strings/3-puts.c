#include "main.h"

/**
 * _puts - print each char in string followe and \n
 * @str: address of 1st char
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

