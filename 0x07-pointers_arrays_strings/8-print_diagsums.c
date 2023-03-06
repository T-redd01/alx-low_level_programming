#include "main.h"

/**
 * print_diagsums - adds diagonal value of 2d square arr
 * @a: address of 1st element
 * @size: size of arr
 */
void print_diagsums(int *a, int size)
{
	int i, j, ld = 0, rd = 0, x[size][size];

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			x[i][j] = *a;
			a++;
		}
	}

	for (i = 0; i < size; i++)
	{
		ld += x[i][i];
	}

	i = (size - 1);
	j = 0;
	while (j < size)
	{
		rd += x[j][i];
		i--;
		j++;
	}
	printf("%d, %d\n", ld, rd);
}
