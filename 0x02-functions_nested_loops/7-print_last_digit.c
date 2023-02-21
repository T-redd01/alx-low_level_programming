#include "main.h"

/**
 * print_last_digit - prints last digit of given int
 * @i: int to check
 *
 * Return: last digit of int
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i *= (-1);
	}
	i %= 10;
	_putchar(i + '0');
	return i;
}

