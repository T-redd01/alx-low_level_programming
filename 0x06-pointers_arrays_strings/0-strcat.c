#include "main.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: destination string
 * @src: source string
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

