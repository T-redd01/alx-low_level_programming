#include "function_pointers.h"

/**
 * int_index - find index of match
 * @array: array to search
 * @size: size of arr 
 * @cmp: func pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if(cmp(array[i]))
			return (i);
	}
	return (-1);
}

