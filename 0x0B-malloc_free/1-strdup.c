#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup-function that returns a pointer to a newly allocated space
 * @str: string(parameter)
 * Return:Pointers to memory or Null
 */
char *_strdup(char *str)
{
	int n, i;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		;
	}
	newstr = malloc(sizeof(char) * (n + 1));
	if (newstr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			newstr[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (newstr);
}
