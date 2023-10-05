#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid -  free up a 2d array grid
 *
 * @grid: double pointer 2d grid
 * @height: height of grid
 *
 * Return: nothing
*/
void free_grid(int **grid, int height)
{
	int r;

	for (r = height - 1; r >= 0; r--)
		free(grid[r]);

	free(grid);
}

