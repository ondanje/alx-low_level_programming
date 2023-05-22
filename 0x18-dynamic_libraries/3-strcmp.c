#include "main.h"
/**
 * _strcmp-function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if string are equal, less than 0 if s1<s2,Greater than 0 if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
