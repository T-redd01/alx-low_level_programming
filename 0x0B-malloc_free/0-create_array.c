#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates and initializes arr with c
 * @size: size of arr
 * @c: char to put in arr
 * Return: addr of arr
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = NULL;

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

