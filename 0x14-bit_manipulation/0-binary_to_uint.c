#include "main.h"
#include "stddef.h"

/**
 * binary_to_uint - This func converts a binary number
 * to a positive int
 * @b: the binary number
 *
 * Return: returns the converted binary number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index = 0;

	if (b == NULL)
		return (0);

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
		index++;
	}
	return (result);
}
