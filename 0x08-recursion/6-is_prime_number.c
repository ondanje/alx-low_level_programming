#include"main.h"
/**
 * prime- prime number function
 * @a: parameter
 * @b:parameter
 * Return: 0
 */
int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime(a, b + 1));
}
/**
 * is_prime_number-returns 1 if is a prime number,else 0
 * @n: number/function parameter
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
