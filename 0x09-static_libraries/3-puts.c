#include"main.h"
/**
 * _puts -function that prints a string
 * @s: function argument
 * Return: 0
 */
void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
