#include "main.h"

/**
 * get_bit - This func returns the value of a bit at
 * a given index
 * @n: the given number
 * @index: index of the number
 *
 * Return: returns the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = 1UL << index;
	return ((n & bit) != 0);
}
