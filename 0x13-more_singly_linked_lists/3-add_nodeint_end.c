#include "lists.h"

/**
 * add_nodeint_end - This func adds a node at the end of a linked list
 * @head: A pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, else, NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (!p)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
	*head = p;
	else
	{
		listint_t *temp = *head;

		while (temp->next)
			temp = temp->next;
		temp->next = p;
	}
	return (p);
}
