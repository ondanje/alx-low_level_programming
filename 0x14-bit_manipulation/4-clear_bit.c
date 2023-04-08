#include"main.h"
/**
 * clear_bit-function that sets the value of a bit to 0 at a given index
 * @n: function argument where the operation is performed on
 * @index:index paramerter
 * Return:1 if it successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);

	return (1);
}
