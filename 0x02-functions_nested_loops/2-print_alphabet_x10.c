#include"main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int j = 0;

	while (j < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		j++;
		_putchar('\n');
	}
}
