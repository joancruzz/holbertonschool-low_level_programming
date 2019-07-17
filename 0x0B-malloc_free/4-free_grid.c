#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - returns a pointer to 2D array
 *@grid: grid pointer
 *@height: int
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
