#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to be printed between strings
 * @n: Number of strings passed to the function
 * @...: Params passed to the method
 * Description: If separator is NULL, nothing is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	char *p;
	unsigned int index;

	va_start(va, n);
	index = 0;
	while (index < n)
	{
		p = va_arg(va, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(va);
}
