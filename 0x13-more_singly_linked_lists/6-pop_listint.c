#include "lists.h"

/**
 * pop_listint - This func deletes the head node of a linked list
 * @head: A pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int index;

	if (head == NULL || *head == NULL)
		return (0);

	index = (*head)->n;
	*head = (*head)->next;
	return (index);
}
