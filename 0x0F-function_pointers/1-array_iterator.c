#include "function_pointers.h"

/**
 * array_iterator - pass elem of arr to a func
 * @array: array to use
 * @size: sizeof arr
 * @action: func pointer
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

