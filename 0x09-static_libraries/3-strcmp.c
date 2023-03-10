#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: 1st string
 * @s2: second string
 *
 * Return: negative s1 < s2, 0 s1 == s2, postive s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

