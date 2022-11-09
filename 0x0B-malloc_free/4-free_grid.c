#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the space previously created.
 *
 * @grid: grid created to be cleared
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
