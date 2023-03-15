#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Ffunction that frees a 2 dimensional grid
 * @grid: 2-dimensional array to be free.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);
}
