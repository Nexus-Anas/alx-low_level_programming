#include "main.h"
#include <stdio.h>

/**
 * print_binary - This func prints the binary value of a number
 * @n: the decimal number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
