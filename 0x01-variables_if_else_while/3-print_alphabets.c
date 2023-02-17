#include<stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a <= 52; a++)
	{
		putchar(alpha[a]);
	}
	putchar('\n');
	return (0);
}
