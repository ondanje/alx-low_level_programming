#include"main.h"
/**
 * _sqrt_recursion-function that returns the natural square root.
 * @n: number(parameter)
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n != floor(n))
	{
		return (-1);
	}
	return (_sqrt_recursion(n, 1));
}
