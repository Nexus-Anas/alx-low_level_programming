#include "main.h"

/**
 * set_bit - This method change the val
 * of the bit to 1
 * @n: this int is a pointer to a given number
 * @index: indexer of a bit.
 *
 * Return: returns -1 if False, 1 if True.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z;

	z = 1;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	z <<= index;
	*n |= z;
	return (1);
}
