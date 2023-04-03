#include "lists.h"

/**
 * listint_len - This func returns the number of items in a linked list
 * @h: A linked list of type listint_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t index = 0;

	for (index = 0; h != NULL; index++)
		h = h->next;
	return (index);
}
