#include "main.h"

/**
 * _strspn - returns num of matches in strings
 * @s: chars to find
 * @accept: string to compare
 * Return: num of matches
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	char *pl = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = pl;
	}
	return (x);
}
