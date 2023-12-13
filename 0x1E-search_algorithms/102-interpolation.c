#include "search_algos.h"

/**
 * interpolation_search - similar to bin search using different formula
 * @array: arr to look in
 * @size: size of arr
 * @value: what to look for
 *
 * Return: index of value, -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t mid = size / 2, l = 0, h = size - 1;

	while (value != array[mid])
	{
		if (l == h || array[h] == array[l])
			return (-1);

		mid = l + (((double)(h - l) / (array[h] -
						array[l])) * (value - array[l]));
		if (mid >= size)
			return (-1);

		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			h = mid - 1;
	}
	return (mid);
}
