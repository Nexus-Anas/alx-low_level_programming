#include "main.h"

/**
 * print_sign - check the code
 * @i: declared character
 * Return: Always 0.
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (i < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
