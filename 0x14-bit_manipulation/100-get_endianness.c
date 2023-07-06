#include "main.h"

/**
 * get_endianness - This method checks for endianness
 *
 * Return: 0
 */

int get_endianness(void)
{
	char *c;
	unsigned int z;

	z = 1;
	c = (char *) &z;
	return ((*c == 1) ? 1 : 0);
}
