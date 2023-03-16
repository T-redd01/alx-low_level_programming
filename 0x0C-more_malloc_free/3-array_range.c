#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - allocates mem to hold vals between min and max
 * @min: min value
 * @max: max value
 * Return: addr to array location
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr = NULL;

	if (min > max)
		return (NULL);

	ptr = malloc(((max + 1) - min) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ((max + 1) - min); i++)
		ptr[i] = min + i;
	return (ptr);
}

