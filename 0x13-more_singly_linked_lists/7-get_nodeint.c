#include "lists.h"

/**
 * get_nodeint_at_index - This func returns the node at
 *				an index in a linked list
 * @head: The first node in the linked list
 * @index: The index of the selected node to return
 * Return: pointer to the node we're looking for, else,  NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position;
	listint_t *temp;

	for (position = 0, temp = head; temp && position < index;
			position++, temp = temp->next)
		;

	return (temp ? temp : NULL);
}
