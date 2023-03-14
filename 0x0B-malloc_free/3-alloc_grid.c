#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid-function that returns a pointer to a 2D array of int.
 * @width: rows
 * @height: columns
 * Return: 0 or Null depending on the outcome
 */
int **alloc_grid(int width, int height)
{
	int rows = height;
	int cols = width;
	int **array;
	int i;
	int n;
	int *k;

	if (cols <= 0 || rows <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(sizeof(int *) * rows);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < rows; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * cols);
		if (array[i] == NULL)
		{
			for (i = 0; i < rows; i++)
			{
				k = array[i];
				free(k);
			}
			free(array);
			return (NULL);
		}
	}
	/* initializing the array with 0*/
	for (i = 0; i < rows; i++)
	{
		for (n = 0; n < cols; n++)
		{
			array[i][n] = 0;
		}
	}
	return (array);
}
