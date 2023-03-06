#include "main.h"

/**
 * _strchr - finds if char in str
 * @s: address of string
 * @c: char to find
 * Return: null or address of match
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
