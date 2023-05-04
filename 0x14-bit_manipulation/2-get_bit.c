#include "main.h"

/**
 * get_bit - This func returns the value of
 * the bit at a given index.
 * @n: the num to look for the bit on.
 * @index: index of the num.
 *
 * Return: returns the value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int searched_bit;

	if (index >= sizeof(unsigned long int) *8)
		return (-1);
	searched_bit = 1UL << index;
	return ((n & searched_bit) != 0);
}
