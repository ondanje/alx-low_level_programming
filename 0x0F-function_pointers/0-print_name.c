#include<stdlib.h>
#include "function_pointers.h"
/**
 * print_name- entry point (function that prints name)
 * @name: parameter to be printed
 * @f: function pointer to print_name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
