#include "lists.h"

/**
 * find_listint_loop - This func finds the loop in a linked list
 * @head: linked list to search for
 * Return: returns the address of the node where the loop
 *					starts, else, NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a = head;
	listint_t *b = head;

	if (head == NULL)
		return (NULL);

	while (a && b && a->next)
	{
		a = a->next->next;
		b = b->next;
		if (a == b)
		{
			b = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (a);
		}
	}
	return (NULL);
}
