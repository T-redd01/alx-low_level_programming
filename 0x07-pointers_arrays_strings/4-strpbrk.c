#include "main.h"

/**
 * _strpbrk - find 1st matching char in string
 * @s: string to search
 * @accept: match to find
 * Return: null if no match address otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
