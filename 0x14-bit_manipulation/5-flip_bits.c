#include "main.h"

/**
 * flip_bits - This func returns the number of bits
 * we need to flip to get from one number to another
 * @n: given number
 * @m: second num
 *
 * Return: returns number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int XOR;

	XOR = n ^ m;
	i = 0;
	while (XOR > 0)
	{
		if (XOR & 1)
			i++;

		XOR >>= 1;
	}
	return (i);
}
