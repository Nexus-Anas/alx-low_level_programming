#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that returns the num of elements in a linked list_t.
 * @h: pointer to the list_t list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
