#include"main.h"
/**
 * puts_half - function that prints half of the string
 * @str: function argument(string)
 * Return: 0
 */
void puts_half(char *str)
{
	int j = 0, h;

	while (str[j] != '\0')
		j++;
	if (j % 2 == 1)
	{
		h = (j - 1) / 2;
		h = h + 1;
	}
	else
	{
		h = j / 2;
	}
	for (; h < j; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
