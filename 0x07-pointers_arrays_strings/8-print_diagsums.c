#include "main.h"

/**
 * print_diagsums - adds diagonal value of 2d square arr
 * @a: address of 1st element
 * @size: size of arr
 */
void print_diagsums(int *a, int size)
{
	int i, x = 0, y = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			x += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			y += a[i];
	}
	printf("%d, %d\n", x, y);
}
