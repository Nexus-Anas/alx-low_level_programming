#include "main.h"

/**
 * clear_bit - This method change the val of the bit to 0
 * @n: this int represents a pointer to a given num.
 * @index: indexer of the bit
 *
 * Return: returns -1 if False, 1 if True
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	z = 1 << index;
	z = ~z;
	*n = (*n & z);
	return (1);
}
