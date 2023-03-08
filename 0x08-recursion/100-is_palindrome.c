#include "main.h"

/**
 * len_of_str - finds length of string
 * @s: address of first char
 * Return: increments till end of str
 */
int len_of_str(char *s)
{
	if (*s != '\0')
	{
		return (1 + len_of_str(s + 1));
	}
	return (0);
}

/**
 * is_pal - check if pal
 * @s: address of 1st char
 * @i: length of str
 * Return: 1 if same, 0 if not
 */
int is_pal(char *s, int i)
{
	if (i < 1)
	{
		return (1);
	}

	if (*s == *(s + i))
	{
		return (is_pal(s + 1, i - 2));
	}
	return (0);
}

/**
 * is_palindrome - check if reads same forwards and backwards
 * @s: address of 1st char
 * Return: calls is_pal
 */
int is_palindrome(char *s)
{
	int len = len_of_str(s);

	return (is_pal(s, len - 1));
}
