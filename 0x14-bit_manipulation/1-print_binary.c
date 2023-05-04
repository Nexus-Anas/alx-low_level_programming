#include "main.h"

/**
 * print_binary - This func prints the binary value
 * of a num using recursion.
 * @n: the num that the program will print its
 * binary value.
 *
 * Return: None.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
