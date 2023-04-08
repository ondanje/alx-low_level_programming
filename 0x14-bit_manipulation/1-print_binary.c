#include "main.h"
/**
 * print_binary -function to print binary representation  of a decimal
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/*base case*/
	if (n == 0)
	{
		;
	}
	if (n > 1)
	{
		/*Recursion*/
		print_binary(n >> 1);
	}
	_putchar ((n & 1) + '0');
}
