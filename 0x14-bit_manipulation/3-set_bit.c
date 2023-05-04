#include "main.h"

/**
 * set_bit - This func change the value of
 * a bit to 1.
 * @n: This variable is a pointer to the
 * given num.
 * @index: index of a bit.
 *
 * Return: returns 1 if true and -1 if false.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int searched_bit = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	searched_bit <<= index;
	*n |= searched_bit;
	return (1);
}
