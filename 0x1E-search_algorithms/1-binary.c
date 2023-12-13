#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_search - implementing binary search
 * @array: first argument
 * @size: second argument
 * @value: third argument
 * Return: returns an integer
 *
*/
int binary_search(int *array, size_t size, int value)
{
		size_t left = 0, right = size - 1, middle, i, x;

	if (array == NULL || left > right)
		return (-1);

	while (left <= right)
	{
		middle = (left + right) / 2;

		x = 0;
		for (i = left; i <= right; i++)
		{
			if (x == 1)
				printf(", ");
			x = 1;
			printf("%d", array[i]);
		}
		printf("\n");

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
