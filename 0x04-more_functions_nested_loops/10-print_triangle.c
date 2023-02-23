#include "main.h"
/**
 * print_triangle - function that prints out a triangle
 * @size: parameter
 * Return: 0
 */
void print_triangle(int size)
{
	int i, n;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (n = size - i; n > 0; n--)
				_putchar(' ');

			for (n = 0; n < i; n++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

