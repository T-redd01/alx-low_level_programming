#include "main.h"

/**
 * print_number - prints numbers using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	int x, count, i, y;
	
	x = n;
	count = 0;
	while (x != 0)
	{
		x = x / 10;
		cont++;
	}
	
	for (i = 0; i < count; i++)
	{
		y = n / (10 * i);
		_putchar(y + n);
	}		
}
