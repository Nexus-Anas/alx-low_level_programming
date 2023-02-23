#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @i: number of times the character \ should be printed
 */
void print_diagonal(int i)
{
	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < i; a++)
		{
			for (b = 0; b < i; b++)
			{
				if (a == b)
					_putchar('\\');
				else if (a > b)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
