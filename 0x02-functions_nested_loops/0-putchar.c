#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0; i < 1; i++)
	{
		char x[9] = "_putchar\n";
		
		for (int j = 0; j < 8; j++)
		{
			_putchar(x[j]);
		}
	}
	return (0);
}
