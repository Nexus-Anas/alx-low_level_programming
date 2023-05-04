#include "main.h"

/**
 * get_endianness - This func checks for
 * endianness.
 *
 * Return: returns 0 if big endian,
 * and 0 if little endian.
 */

int get_endianness(void)
{
	unsigned int endianness_num;
	char *p;

	endianness_num = 1;
	p = (char *) &endianness_num;
	return ((*p == 1) ? 1 : 0);
}
