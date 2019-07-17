#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - ponter to a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2 dimentional array of int
 */
int **alloc_grid(int width, int height)
{
	int w;
	int h;
	int **pointer;

	if (width < 1 || height < 1)
		return (NULL);
	pointer = malloc(sizeof(int *) * (height));
	if (pointer == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		pointer[h] = malloc(sizeof(int) * width);
		if (pointer[h] == NULL)
		{
			while (h >= 0)
			{
				h--;
				free(pointer[h]);
			}
			free(pointer);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			pointer[h][w] = 0;
	}
	return (pointer);
}
