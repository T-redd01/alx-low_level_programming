 #include "main.h"

/**
 * print_alphabet_x10 - prints a - z 10 times and \n
 *
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; i++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}

