#include "main.h"

/**
 * clear_bit - This func change the value
 * of a bit to 0.
 * @n: This variable is a pointer to the
 * given num.
 * @index: index of a bit.
 *
 * Return: returns 1 if true, -1 if fakse.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int searched_bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	searched_bit = 1 << index;
	searched_bit = ~searched_bit;
	*n = (*n & searched_bit);
	return (1);
}
