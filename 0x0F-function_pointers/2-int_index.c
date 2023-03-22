#include "function_pointers.h"
/**
 * int_index - return index in case the comparison is true
 * @array: array
 * @size: size of elements in the array
 * @cmp: pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	index = 0;
	while (index < size)
	{
		if (cmp(array[index]))
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
