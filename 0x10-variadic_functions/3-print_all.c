#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints everything
 * @format: array of types of params passed to this method
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	char *p, *sep = "";
	va_list va;

	va_start(va, format);
	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", sep, va_arg(va, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(va, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(va, double));
					break;
				case 's':
					p = va_arg(va, char *);
					if (!p)
					{
						p = "(nil)";
					}
					printf("%s%s", sep, p);
					break;
				default:
					index++;
					continue;
			}
			sep = ", ";
			index++;
		}
	}
	printf("\n");
	va_end(va);
}
