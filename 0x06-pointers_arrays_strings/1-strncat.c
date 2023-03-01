#include "main.h"

/**
 * _strncat - adds n num of sc char to dest str
 * @dest: string to add
 * @src: str to add
 * @n: num to add
 *
 * Return: address of dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

