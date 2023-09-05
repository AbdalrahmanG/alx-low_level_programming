#include"main.h"
#include <stdlib.h>

/**
 * free_grid - it really means the free grid
 *
 * @grid: double grid pointer
 * @height: int height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int ch = 0;

	for (; ch < height; ch++)
		free(grid[ch]);
	free(grid);
}
