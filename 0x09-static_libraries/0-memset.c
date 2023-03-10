#include "main.h"

/**
 * _memset - copy n time b to area in mem to s
 * @s: destination
 * @b: char to copy
 * @n: amount to copy
 * Return: address of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
