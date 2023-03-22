#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - entry point (func that prints name)
 * @name: parameter to be printed
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
