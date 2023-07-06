#include "main.h"

/**
 * print_binary - this method prints the bin
 * val of an int using recursion
 * @n: the int used to print its bin val
 *
 * Return: none.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
