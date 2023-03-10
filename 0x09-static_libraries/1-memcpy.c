#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest
 * @dest: dest address
 * @src: src address to copy
 * @n: bytes to copy
 * Return: address to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
