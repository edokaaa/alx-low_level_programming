#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: pointer to the array
 * @height: height of array
 *
 * Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
