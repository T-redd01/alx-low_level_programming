#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - adds diagonal value of 2d square arr
 * @a: address of 1st element
 * @size: size of arr
 */
void print_diagsums(int *a, int size)
{
	int i, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x += *(a + (size * i + i));
		y += *(a + (size * i + size - 1 - i));
	}
	printf("%d, %d\n", x, y);
}
