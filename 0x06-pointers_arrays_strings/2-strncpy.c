#include "main.h"

/**
 * _strncpy - copies n num of src to dest
 * @dest: destination string
 * @src: source string
 * @n: num of char to cp
 *
 * Return: address of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

