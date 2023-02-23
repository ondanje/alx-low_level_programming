#include"main.h"
/**
 * print_diagonal- function that prints diagonals
 * @n: function argument(no of diagonals to be printed)
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
	}
	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
