#include "main.h"

/**
 * _islower - check the code
 * @i: declared character
 * Return: Always 0.
 */
int _islower(int i)
{
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	return (0);
}
