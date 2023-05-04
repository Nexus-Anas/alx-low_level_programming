#include "main.h"

/**
 * flip_bits - This func returns the num of bits
 * we need to flip to get one num to another.
 * @n: this variable is the first given num.
 * @m: This variable is the second given num.
 *
 * Return: returns num of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int index, xor;

	index = 0;
	xor = m ^ n;
	while (xor > 0)
	{
		if (xor & 1)
			index += 1;
		xor >>= 1;
	}
	return (index);
}
