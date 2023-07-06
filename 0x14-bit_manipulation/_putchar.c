#include "main.h"

/**
 * _putchar - This method is equivalent to putchar.
 * @ch: character parameter.
 *
 * Return: returns 'ch'.
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
