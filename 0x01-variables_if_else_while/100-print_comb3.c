#include<stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 1;

	while (i <= 9)
	{
		j = i + 1;

		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
