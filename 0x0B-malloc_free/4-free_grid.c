#include "holberton.h"
/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by alloc_grid function
 * @grid: 2-dimensional grid
 * @height: height of grid
 */
void free_grid(int **grid, int __attribute((unused))height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
