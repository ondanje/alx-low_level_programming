#include"main.h"
/**
 * set_bit-sets the value of a bit to 1 at a given index
 * @n:pointer to a value to be inserted
 * @index: position or the index parameter
 * Return:1 if it worked, or -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n |= 1UL << index;

	return (1);
}
