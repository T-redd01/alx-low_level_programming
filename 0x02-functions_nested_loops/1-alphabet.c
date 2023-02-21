#include "main.h"

/**
 * print_alphabet - prints a - z followed by \n
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

