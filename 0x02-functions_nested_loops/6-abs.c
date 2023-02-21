#include "main.h"

/**
 * _abs - check the code
 * @i: declared character
 * Return: Always 0.
 */
int _abs(int i)
{
	if (i < 0)
	{
		int value;

		value = i * -1;
		return (value);
	}
	return (i);
}
