#include "lists.h"
/**
 * add_nodeint - This func adds a new node at the beginning of a linked list
 * @head: A pointer to the first node in the list
 * @n: data to insert in the new node
 * Return: pointer to the new node, else, return NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
		return (NULL);

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
