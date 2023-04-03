#include "lists.h"

/**
 * print_listint - this func prints all the items of a linked list
 * @h: A linked list of type listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
