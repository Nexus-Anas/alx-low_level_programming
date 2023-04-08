#include "main.h"

/**
 * clear_bit - This func sets the value of a bit to 0
 * @n: pointer to the given number
 * @index: index of the bit
 *
 * Return: returns 1 if true, else, -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = 1 << index;
	bit = ~bit;
	*n = (*n & bit);
	return (1);
}
