#include "main.h"

/**
 * print_number - prints an integer
 * @i: integer to be printed
 */
void print_number(int i)
{
	unsigned int num;

	if (i < 0)
	{
		num = -i;
		_putchar('-');
	}
	else
	{
		num = i;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
