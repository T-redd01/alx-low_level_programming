#include "main.h"

/**
 * cap_string - cap 1st let of word
 * @a: string to cap
 *
 * Return: address of string
 */
char *cap_string(char *a)
{
	int seps[13] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};
	char ups[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j, k, x = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (a[i] == seps[j])
			{
				for (k = 'a'; k <= 'z'; k++)
				{
					if (a[i + 1] == k)
					{
						a[i + 1] = ups[x];
					}
					x++;
				}
				x = 0;
			}
		}
	}
	return (a);
}

