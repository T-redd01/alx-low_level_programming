#include "main.h"
#include <stdio.h>

/**
 * print_array - ptin n num of arr elements
 * @a: arr mem address
 * @n: num to stop
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}

