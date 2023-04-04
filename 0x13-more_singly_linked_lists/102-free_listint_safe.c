#include "lists.h"

/**
 * free_listint_safe - Thid func frees a linked list
 * @h: A pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	listint_t *p;
	int frees;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		frees = *h - (*h)->next;
		if (frees > 0)
		{
			p = (*h)->next;
			free(*h);
			*h = p;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
