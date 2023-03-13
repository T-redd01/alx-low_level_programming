#include <stdio.h>

/**
 * free_grid - frees mem
 * @grid: addr of 2d arr to free
 * @height: rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}

