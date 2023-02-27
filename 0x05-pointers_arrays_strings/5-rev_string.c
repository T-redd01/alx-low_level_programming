#include "main.h"

/**
 * rev_string - reverse char order in memory
 * @s: address of 1st char
 */
void rev_string(char *s)
{
	char arr;
	int i, x, y;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	y = x - 1;

	for (i = 0; i < x / 2; i++)
	{
		arr = s[i];
		s[i] = s[y];
		s[y--] = arr;
	}
}

