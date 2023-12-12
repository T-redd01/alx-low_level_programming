#include "search_algos.h"
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
	size_t i, step = sqrt(size), start = 0;

	for (i = 0; i < size; i += step)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", start, i);
			for (;start <= i; start++)
			{
				printf("Value checked array[%lu] = [%d]\n", start, array[start]);
				if (array[start] == value)
					return (start);
			}
		}

		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] < value)
			start = i;
	}
	return (-1);
}
