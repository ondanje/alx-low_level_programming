#include"main.h"

int actual_sqrt(int n, int i);
/**
 * _sqrt_recursion-function that returns the natural square root.
 * @n: number(parameter)
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 0));
}
/**
 * actual_sqrt- function
 * @n: function argument
 * @i: function argument
 * Return: 0
 */
int actual_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt(n, i + 1));
}
