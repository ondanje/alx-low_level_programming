#include"main.h"
/**
 * binary_to_uint- function to conert binary too unsigned int
 * @b: binary string
 * Return: converted num or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, len;

	len = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
		{
			num <<= 1;
		}
		else if (b[i] == '1')
		{
			num <<= 1;
			num |= 1;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}



