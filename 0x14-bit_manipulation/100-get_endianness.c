#include"main.h"
/**
 * get_endianness-function that checks the endianness
 * Return:0
 */
int get_endianness(void)
{
	unsigned int k = 1;

	char *l = (char *) &k;

	return ((int)*l);
}
