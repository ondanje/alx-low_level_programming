#include<stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char al[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a <= 52; a++)
	{
		putchar(al[a]);
	}
	putchar('\n');
	return (0);
}
