#include "main.h"
/**
 * _strcat-function that concatenates trwo strings
 * @dest: destination
 * @src: source
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (result);
}
