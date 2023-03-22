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
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
