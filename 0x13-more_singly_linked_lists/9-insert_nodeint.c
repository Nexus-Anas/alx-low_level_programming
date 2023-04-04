#include "lists.h"

/**
 * insert_nodeint_at_index - This func inserts
 *		a new node node in a linked list
 * @head: A pointer to the first node in the list
 * @idx: The index where the new node is added
 * @n: Present the data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (idx == 0)
	{
		listint_t *p = malloc(sizeof(listint_t));

		if (p == NULL)
			return (NULL);

		p->n = n;
		p->next = *head;
		*head = p;

		return (p);
	}
	if (*head == NULL)
		return (NULL);

	(*head)->next = insert_nodeint_at_index(&((*head)->next), idx - 1, n);
	return ((*head)->next);
}
