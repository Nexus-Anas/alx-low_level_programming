#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code
 * @i: declared int
 * Return: Always 0.
 */
void print_to_98(int i)
{
	if (i <= 98)
	{
		for (; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else
	{
		for (; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
}
