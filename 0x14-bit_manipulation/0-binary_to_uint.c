#include "main.h"

/**
 * binary_to_uint - This func converts a binary num
 * to a non negative integer.
 * @b: This variable presents the binary num to to
 * operate on.
 *
 * Return: returns the converted binary num.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, index;

	if (b == NULL)
		return (0);

	result = 0;
	index = 0;

	while (b[index] != '\0')
	{
		if (b[index] == '0')
			result <<= 1;
		else if (b[index] == '1')
		{
			result <<= 1;
			result |= 1;
		}
		else
			return (0);
		index += 1;
	}
	return (result);
}
