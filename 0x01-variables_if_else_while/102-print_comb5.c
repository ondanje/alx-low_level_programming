#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (i = i + 1; j < 100; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (i == 98 && j == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
