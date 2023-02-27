#include"main.h"
/**
 * print_rev - function to print a string a  reverse
 * @s: parameter( a string to be printed)
 * Return:0
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (a -= 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
