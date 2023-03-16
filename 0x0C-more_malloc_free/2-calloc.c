#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc-function that allocates memory for an array
 * @nmemb: array of elements
 * @size: size in bytes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
