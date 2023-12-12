#include "search_algos.h"

/**
 * linear_search - compare from begining till found
 * @array: array to look in
 * @size: size of array
 * @value: value to look for
 *
 * Return: index of value, -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
