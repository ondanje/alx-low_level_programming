#include"main.h"
/**
 * _islower - print if c is lower
 * @c : function argument
 * Return: 1 if lowercase and 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
