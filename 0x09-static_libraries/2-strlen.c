#include"main.h"
/**
 * _strlen - function to print length of a string
 * @s: function argument
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
