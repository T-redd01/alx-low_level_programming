#include "search_algos.h"

/**
 * exponential_search - step i by squaring it
 * @array: arr to look in
 * @size: size of arr
 * @value: to look for
 *
 * Return: index of value, -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, l = 0;
	int ret = -1;

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		if (array[i] > value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", l, i);
			ret = binary_search(array + l, i - l, value);
			if (ret == -1)
				return (-1);
			return (ret + l);
		}

		l = i;
		i *= 2;
	}
	ret = binary_search(array + l, size - l, value);
	if (ret == -1)
		return (-1);
	return (ret + l);
}
