#include "search_algos.h"

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
 * binary_search - divide and conquer search algo
 * @array: array of ints
 * @size: size of array
 * @value: value to look for
 *
 * Return: index of value in array, -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid = size / 2, beg = 0, end = size;

	for (i = 0; i < size; i++)
	{
		print_arr(array, beg, end);
		if (value == array[mid])
			return (mid);

		if (mid == 0 || mid == (size - 1))
			break;

		if (value > array[mid])
		{
			beg = mid;
			end = size;
			mid = (mid + size) / 2;
		}
		else
		{
			beg = 0;
			end = mid;
			mid = mid / 2;
		}
	}
	return (-1);
}
