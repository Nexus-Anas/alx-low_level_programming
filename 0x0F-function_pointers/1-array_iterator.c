#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a new line
 * @array: array
 * @size: how many element to print
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (index < size)
	{
		action(array[index]);
		index++;
	}
}
