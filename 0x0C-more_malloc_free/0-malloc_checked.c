#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates byte to ptr and checks if null
 * @b: num of bytes to allocate
 * Return: addr of new allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

