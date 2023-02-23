#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @i: number of times the character _ should be printed
 */
void print_line(int i)
{
	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;

		for (j = 1; j <= i; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

