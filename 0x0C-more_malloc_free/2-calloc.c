#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates blocks of specific size in mem
 * @nmemb: amt of blocks
 * @size: size of blocks
 * Return: addr of mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*((char *)(ptr) + i) = 0;

	return (ptr);
}

