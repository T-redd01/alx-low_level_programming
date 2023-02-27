#include "main.h"

/**
 * _strlen - count number of chars in a string
 * @s: pointer to 1st mem addr of string
 *
 * Return: num of chars
 */
int _strlen(char *s)
{
	int i = 1;

	while (1)
	{
		if (*(s + 1) != '\0')
		{
			i++;
			s++;
		}
		else
		{
			break;
		}
	}
	return (i);
}

