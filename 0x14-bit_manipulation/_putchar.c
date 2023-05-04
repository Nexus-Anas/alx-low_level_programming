#include "main.h"

/**
 * _putchar - This func works the same as putchar function.
 * @c: character
 *
 * Return: returns character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
