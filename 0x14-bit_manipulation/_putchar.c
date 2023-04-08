#include "main.h"
#include <stdio.h>

/**
 * _putchar - This func prints a char
 * @c: character
 *
 * Return: returns c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
