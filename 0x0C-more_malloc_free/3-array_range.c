#include"main.h"
#include<stdio.h>
#include <stdlib.h>
/**
 * array_range-function that creates an array of integers
 * @min:start value
 * @max:last value
 * Return:pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int n;
	int i;
	int *ptr;

	n = max - min;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (n + 1); i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
