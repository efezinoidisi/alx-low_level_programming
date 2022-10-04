#include <stdlib.h>

/**
 * alloc_grid - creates 2 dimensional array of integers
 * @width: array row
 * @height: array column
 *
 * Return: pointer to 2D array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid, a, b, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * width);
	for (a = 0; a < width; a++)
		grid[a] = malloc(height * sizeof(int));

	if (grid == NULL)
		return (NULL);
	for (b = 0; b < width; b++)
	{
		for (c = 0; c < height; c++)
		{
			grid[b][c] = 0;
		}
	}
	return (grid);
}
