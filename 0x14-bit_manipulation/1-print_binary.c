#include "main.h"
/**
 * print_binary -function to print binary representation  of a decimal
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int val = 1;

	while ((val << 1) <= n)
	{
		val <<= 1;
	}

	while (val > 0)
	{

		if (n & val)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

		val >>= 1;
	}
}
