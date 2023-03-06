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

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
