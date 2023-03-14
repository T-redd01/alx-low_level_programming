#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates 2d arr initialized with 0
 * @width: columns
 * @height: rows
 * Return: int arr addr
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr = NULL;

	ptr = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
		ptr[i] = malloc(width * sizeof(int));

	if (width <= 0 || height <= 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}

