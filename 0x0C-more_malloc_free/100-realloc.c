#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates memory to ptr
 * @ptr: addr of original/old vals
 * @old_size: size of ptr
 * @new_size: bytes to reallocate
 * Return: newptr to new allocated mem
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *newptr = NULL;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size && ptr != NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			newptr[i] = *((char *)ptr + i);
		free(ptr);
	}
	return (newptr);
}

