#include <stdlib.h>

/**
 * free_grid - frees memory of 2D array
 * @grid: 2D array
 * @height: height of array
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
