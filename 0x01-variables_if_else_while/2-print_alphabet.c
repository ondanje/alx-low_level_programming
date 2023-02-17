#include<stdio.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	char al[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a <= 26; a++)
	{
		putchar(al[a]);
	}
	putchar('\n');
	return (0);
}
