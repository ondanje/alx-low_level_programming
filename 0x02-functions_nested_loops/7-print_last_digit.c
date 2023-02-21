#include"main.h"
/**
 * print_last_digit - function to print last digit of a number
 * @n : function argument
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
