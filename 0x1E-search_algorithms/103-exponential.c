#include "search_algos.h"

void print_arr(int *arr, size_t beg, size_t end);
int bin_search(int *array, size_t size, int value);

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
			ret = bin_search(array + l, i - l, value);
			if (ret == -1)
				return (-1);
			return (ret + l);
		}

		l = i;
		i *= 2;
	}
	ret = bin_search(array + l, size - l, value);
	if (ret == -1)
		return (-1);
	return (ret + l);
}

/**
 * print_arr - print array that is being searched
 * @arr: array of ints
 * @beg: start index
 * @end: end index
 */
void print_arr(int *arr, size_t beg, size_t end)
{
	printf("Searching in array:");
	while (beg < end)
	{
		if ((beg + 1) == end)
			printf(" %d\n", arr[beg]);
		else
			printf(" %d,", arr[beg]);
		beg++;
	}
}

/**
 * bin_search - divide and conquer search algo
 * @array: array of ints
 * @size: size of array
 * @value: value to look for
 *
 * Return: index of value in array, -1
 */
int bin_search(int *array, size_t size, int value)
{
	size_t i, mid = size / 2, beg = 0, end = size;

	for (i = 0; i < size; i++)
	{
		print_arr(array, beg, end);
		if (array[mid] == value)
			return (mid);

		if (mid == beg || mid == end)
			break;

		if (value > array[mid])
		{
			beg = mid;
			mid = (mid + end) / 2;
		}
		else
		{
			end = mid;
			mid = (beg + mid) / 2;
		}
	}
	return (-1);
}
