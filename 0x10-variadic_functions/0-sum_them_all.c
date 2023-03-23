#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -function that returns the sum of all its parameters
 * @n: number parameter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}
