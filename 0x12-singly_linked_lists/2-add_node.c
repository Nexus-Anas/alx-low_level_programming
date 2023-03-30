#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	unsigned int l = 0;

	while (str[l])
	{
		l++;
	}
	p = malloc(sizeof(list_t));
	if (!p)
	{
		return (NULL);
	}
	p->str = strdup(str);
	p->len = l;
	p->next = (*head);
	(*head) = p;
	return (*head);
}
