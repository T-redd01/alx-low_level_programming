#include "main.h"

/**
 * _strstr - finds substring in string
 * @haystack: string to search
 * @needle: string to find
 * Return: null if no match addres of haystack match
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, x = 0, y = 0;

	while (needle[x] != '\0')
		x++;

	for (; *haystack != '\0'; haystack++)
	{
		y = 0;
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] == needle[i])
				y++;
			else
				break;
		}

		if (y == x)
			return (haystack);
	}
	return (NULL);
}
