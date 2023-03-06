#include "main.h"

/**
 * _strpbrk - find 1st matching char in string
 * @s: string to search
 * @accept: match to find
 * Return: null if no match address otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
