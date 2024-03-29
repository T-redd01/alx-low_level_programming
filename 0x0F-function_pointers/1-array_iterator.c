#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - pass elem of arr to a func
 * @array: array to use
 * @size: sizeof arr
 * @action: func pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

