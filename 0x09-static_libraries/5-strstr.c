#include "main.h"

/**
 * _strstr - finds substring in string
 * @haystack: string to search
 * @needle: string to find
 * Return: null if no match addres of haystack match
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}

