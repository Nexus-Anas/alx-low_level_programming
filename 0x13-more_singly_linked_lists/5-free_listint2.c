#include "lists.h"

/**
 * free_listint2 - This func frees a linked list
 * @head: A pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
