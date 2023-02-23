#include  "main.h"
/**
 * _isdigit- function
 * @c: function parameter
 * Return: 1 if c is a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
