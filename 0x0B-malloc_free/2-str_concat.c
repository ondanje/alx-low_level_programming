#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat-function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return:NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int n1, n2;
	int i, a;

	a = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (n1 = 0; s1[n1] != '\0'; n1++)
	{
		;
	}
	for (n2 = 0; s2[n2] != '\0'; n2++)
	{
		;
	}
	s3 = malloc(sizeof(char) * (n1 + n2 + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}
	for (; s2[a] != '\0'; i++)
	{
		s3[i] = s2[a];
		a++;
	}
	return (s3);
}
