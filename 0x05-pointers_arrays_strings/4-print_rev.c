#include "main.h"
/**
 * print_rev - imprime en reversa
 * @str: string
 * return: 0
 */
void print_rev(char *str)
{
	int i = 0;
	int p;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	str--;
	for (p = i; p > 0; p--)
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n');
}
