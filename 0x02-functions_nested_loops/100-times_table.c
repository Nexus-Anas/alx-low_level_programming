#include "main.h"
/**
 * print_times_table - check the code
 * @i: declared int
 * Return: Always 0.
 */
void print_times_table(int i)
{
	int n, m, p;

	if (i >= 0 && i <= 15)
	{
		for (n = 0; n <= i; n++)
		{
			_putchar('0');
			for (m = 1; m <= i; m++)
			{
				_putchar(',');
				_putchar(' ');
				p = n * m;
				if (p <= 99)
				{
					_putchar(' ');
				}
				if (p <= 9)
				{
					_putchar(' ');
				}
				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar((p / 10) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
