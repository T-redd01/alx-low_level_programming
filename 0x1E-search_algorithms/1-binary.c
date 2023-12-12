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
	size_t mid = size / 2, beg = 0, end = size;

	while (1)
	{
		print_arr(array, beg, end);
		if (array[mid] == value)
			return (mid);

		if (mid == 0 || (mid + 1) == size)
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
