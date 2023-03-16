#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * string_nconcat-function that concatenates two strings.
 * @s1:string one
 * @s2:string two
 * @n:number of bytes
 * Return: pointer to the newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int a;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		;
	}
	if (n >= i)
	{
		n = i;
	}
	ptr = malloc(sizeof(char) * (a + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		ptr[a] = s1[a];
	}
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		ptr[a + i] = s2[i];
	}
	ptr[a + i] = '\0';

	return (ptr);
}
