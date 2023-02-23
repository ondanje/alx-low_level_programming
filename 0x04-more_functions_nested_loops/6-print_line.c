#include "main.h"
/**
 * print_line- function that prints a line
 * @n: function parameter
 * Return:0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

