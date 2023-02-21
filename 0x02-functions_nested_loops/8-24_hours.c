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

	int k, tl, i, j, l;

	for (k = 0; k <= 2; k++)
	{
		tl = 10;

		if (count == 2)
		{
			tl = 4;
		}
		for (i = 0; i < tl; i++)
		{
			for (j = 0; j < 6; j++)
			{
				for (l = 0; l < 10; l++)
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

