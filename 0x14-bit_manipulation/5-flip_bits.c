#include"main.h"
/**
 * flip_bits-function that returns the number of bits you would need to flip
 * to get to another number
 * @n:function argument
 * @m:function argument
 * Return:the no. of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int no_of_bits = 0;
	unsigned long int x;

/*XOR to find the different bits in n and m*/
	x = n ^ m;

	while (x > 0)
	{
		no_of_bits += x & 1;
		x >>= 1;
	}
	return (no_of_bits);
}

