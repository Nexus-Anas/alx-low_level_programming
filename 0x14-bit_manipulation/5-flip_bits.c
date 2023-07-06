#include "main.h"

/**
 * flip_bits - This method returns the number
 * of bits needed to flip for getting one number
 * to another
 * @n: this var is the first int
 * @m: this var is the second int
 *
 * Return: returns number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int y, z;

	y = 0;
	z = m ^ n;
	while (z > 0)
	{
		if (z & 1)
			y += 1;
		z >>= 1;
	}
	return (y);
}
