#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;
	list_t *temp = *head;
	unsigned int l = 0;

	while (str[l])
	l++;

	p = malloc(sizeof(list_t));
	if (!p)
	{
		return (NULL);
	}
	p->str = strdup(str);
	p->len = l;
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
		return (p);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = p;
	return (p);
}
