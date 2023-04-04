#include "lists.h"

/**
 * delete_nodeint_at_index - This func deletes a node
 *			in a linked list at a certain index
 * @head: A pointer to the first element in the list
 * @index: The index of the node to delete
 * Return: 1 (Success), -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	p = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	for (i = 0; p != NULL && i < index; i++)
	{
		prev = p;
		p = p->next;
	}

	if (p == NULL)
		return (-1);

	prev->next = p->next;
	free(p);
	return (1);
}
