#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * function concatenates arguments of program
 * @grid: 2D grid
 * @height: dimension
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
