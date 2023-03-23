#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all
 *		the params inside it.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int index, sum = 0;

	va_start(va, n);
	index = 0;
	while (index < n)
	{
		sum += va_arg(va, int);
		index++;
	}
	va_end(va);
	return (sum);
}
