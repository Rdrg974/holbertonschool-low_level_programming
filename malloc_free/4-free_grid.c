#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid
 *
 * @grid: a pointer to a 2 dimensional grid
 * @height: an integer
 *
 * Not return
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
