#include "main.h"

/**
 * print_last_digit - prints last digit of given int
 * @i: int to check
 *
 * Return: last digit of int
 */
int print_last_digit(int i)
{
	i %= 10;

	if (i < 0)
	{
		i *= (-1);
	}
	_putchar(i + '0');
	return (i);
}

