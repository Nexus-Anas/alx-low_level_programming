#include "lists.h"

/**
 * free_listint2 - This func frees a linked list
 * @head: A pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (*head)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	*head = NULL;
}
