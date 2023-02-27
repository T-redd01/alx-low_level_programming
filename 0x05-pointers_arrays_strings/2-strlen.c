#include "main.h"

/**
 * _strlen - count number of chars in a string
 * @s: pointer to 1st mem addr of string
 *
 * Return: num of chars
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

