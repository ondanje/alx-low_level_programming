#include"main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: function argument
 * @b: function argument
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
