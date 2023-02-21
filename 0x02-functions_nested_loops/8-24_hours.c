#include "main.h"

/**
 * jack_bauer - counts minutes of day
 * @count: check num of loops
 * @tl: to end at 23
 *
 */
void jack_bauer(void)
{
	int count = 0;

	for (int k = 0; k <= 2; k++)
	{
		int tl = 10;

		if (count == 2)
		{
			tl = 4;
		}
		for (int i = 0; i < tl; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				for (int l = 0; l < 10; l++)
				{
					_putchar(count + '0');
					_putchar(i + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
		count++;
	}
}

