#include "lists.h"

/**
 * reverse_listint - This func reverses a linked list
 * @head: A pointer to the first node in the list
 * Return: returns a pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
