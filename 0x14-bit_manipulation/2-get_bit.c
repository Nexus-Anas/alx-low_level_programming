#include "main.h"

/**
 * get_bit - This method returns the val
 * of the bit at a given indexer.
 * @n: the int to look for the bit on.
 * @index: indexer of the num.
 *
 * Return: returns the val of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int z;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	z = 1UL << index;
	return ((n & z)  != 0);
}
