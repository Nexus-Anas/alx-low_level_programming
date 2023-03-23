#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: Number of integers passed to this method.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int index;

	va_start(va, n);
	index = 0;
	while (index < n)
	{
		printf("%d", va_arg(va, int));
		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		index++;
	}
	printf("\n");
	va_end(va);
}
