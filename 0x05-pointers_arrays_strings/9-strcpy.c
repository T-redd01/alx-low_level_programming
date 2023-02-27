#include "main.h"

/**
 * *_strcpy - copies string to another string
 * @dest: dest string
 * @src: src string
 * Return: dest address
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = src[i];
	}
	*(dest + i) = src[i];
	return (dest);
}

