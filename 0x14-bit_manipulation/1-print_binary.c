#include "main.h"

/**
 * print_binary - prints binary representation of number
 * @n: num to conv
 */
void print_binary(unsigned long int n)
{
	unsigned long int comp = 1UL << ((sizeof(unsigned long int) * 8) - 1);

	if (n == 0)
		_putchar('0');

	while (comp)
	{
		if (comp & n)
			break;
		comp = comp >> 1;
	}

	while (comp)
	{
		if (comp & n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		comp = comp >> 1;
	}
}

