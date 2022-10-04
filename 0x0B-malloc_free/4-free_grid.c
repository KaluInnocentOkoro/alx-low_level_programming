#include "main.h"

/**
* free_grid - Function frees a 2 dimensional grid.
* @grid: 2D array to be freed
* @height: row of the array
* Return: NOTHING
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
