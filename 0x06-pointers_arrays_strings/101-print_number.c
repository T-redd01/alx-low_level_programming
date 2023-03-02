#include "main.h"

/**
 * print_number - uses recursion to print char of int
 * @n: int to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar('0' + n % 10);
}

