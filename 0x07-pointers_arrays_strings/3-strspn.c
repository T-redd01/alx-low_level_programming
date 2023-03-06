#include "main.h"

/**
 * _strspn - returns num of matches in strings
 * @s: chars to find
 * @accept: string to compare
 * Return: num of matches
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				n++;
				break;
			}
		}
	}

	j = 0;
	while (s[j] != '\0')
		j++;
	if (accept[i] == s[j])
		n++;
	return (n);
}
