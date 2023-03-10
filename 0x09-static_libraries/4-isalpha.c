#include"main.h"
/**
 * _isalpha - print whether is an alphabet or not
 * @c: function argument
 * Return: 1 if lower/uppercase else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
