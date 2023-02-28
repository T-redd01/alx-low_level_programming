#include "main.h"

/**
 * int _atoi(char *s) - return int of string
 * @s: string to change
 *
 * Return: int num
 */
int _atoi(char *s)
{
	int i, x, neg = 0, pt = 0, num = 0;
	char dig, dig2;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			neg++;
		}
		else if (pt != 1)
		{
			x = 0;
			for (dig = '0'; dig <= '9'; dig++)
			{
				if (s[i] == dig)
				{
					for (dig2 = '0'; dig2 <= '9'; dig2++)
					{
						if (s[i + 1] == dig2)
						{
							pt = 0;
							break;
						}
						else
						{
							pt = 1;
						}
					}
					num = (num + x) * 10;
				}
				x++;
			}
		}
		else
			break;
	}
	num /= 10;
	for (i = 0; i < neg; i++)
	{
		num *= -1;
	}
	return (num);
}
