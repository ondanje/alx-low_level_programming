#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid-function that frees a 2D grid previously created
 * @grid: function parameter
 * @height:function parameter
 * Return: void(nothing)
 */
void free_grid(int **grid, int height)
{
	int i;
	int *k;

	for (i = 0; i < height; i++)
	{
		k = grid[i];
		free(k);
	}
	free(grid);
}
