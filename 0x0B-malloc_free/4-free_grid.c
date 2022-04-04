#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional array of integers
 *
 * @grid: the dimensional array of integers to be freed.
 * @height: the height of grid
 */
void free_grid(int **grid, int height)
{
	int index = 0;

	for (; index < height; index++)
		free(grid[index]);

	free(grid);
}
