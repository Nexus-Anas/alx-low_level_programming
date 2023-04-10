#include "main.h"

/**
 * get_endianness - This func checks the endianness
 *
 * Return: returns 0 if big, else, 1
 */

int get_endianness(void)
{
	unsigned int endianness = 1;
	char *p = (char *) &endianness;

	if (*p == 1)
		return (1);
	return (0);
}
