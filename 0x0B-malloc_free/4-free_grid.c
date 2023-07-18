#include"main.h"
#include <stdlib.h>

/**
 * free_grid - free grid
 *
 * @grid: double grid pointer
 * @height: int height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
