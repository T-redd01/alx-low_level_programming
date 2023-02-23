#include "main.h"

/**
 * more_numbers - prints 0 - 14, 10 times
 */
void more_numbers(void)
{
	int i, j, k, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j / 10;
			x = j % 10;
			if (k != 0)
			{
				_putchar(k + '0');
			}
			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
