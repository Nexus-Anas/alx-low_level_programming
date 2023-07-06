#include "main.h"

/**
 * binary_to_uint - This method converts a bin num to a pos int.
 * @b: The bin num to operate on.
 *
 * Return: returns the converted bin num.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res, z;

	if (b == NULL)
		return (0);

	z = 0;
	res = 0;
	while (b[z] != '\0')
	{
		if (b[z] == '0')
			res <<= 1;
		else if (b[z] == '1')
		{
			res <<= 1;
			res |= 1;
		}
		else
			return (0);
		z += 1;
	}
	return (res);
}
