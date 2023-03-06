#include "main.h"

/**
 * _strchr - finds if char in str
 * @s: address of string
 * @c: char to find
 * Return: null or address of match
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
