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
 * advanced_binary - binary search with duplicates
 * @array: arr to search
 * @size: size of arr
 * @value: value to find
 *
 * Return: index of val, -1
 */
int advanced_binary(int *array, size_t size, int value)
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
