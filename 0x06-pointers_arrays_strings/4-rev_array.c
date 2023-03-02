#include"main.h"
/**
 * reverse_array-function to reverse content of an array
 * @a: pointer  to the location of the array
 * @n: number of elements in an array
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}

