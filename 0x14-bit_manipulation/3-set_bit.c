#include "main.h"

/**
 * set_bit - This func sets the value of a bit to 1
 * @n: pointer to the given number
 * @index: index of the bit
 *
 * Return: returns 1 if true, else, -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit <<= index;
	*n |= bit;
	return (1);
}
