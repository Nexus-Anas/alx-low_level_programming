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
	int index;
	unsigned long int highest_bit = 1;

	while ((highest_bit << 1) <= n)
		highest_bit <<= 1;

	while (highest_bit > 0)
	{
		index = !!(highest_bit & n);
		putchar('0' + index);
		highest_bit >>= 1;
	}
}
