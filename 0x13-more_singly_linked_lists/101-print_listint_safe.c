#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - This func counts the number of unique nodes
 *	in linked list.
 * @head: A pointer to the head of the listint_t.
 * Return: the number of unique nodes in the list, else, - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *a, *b;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	a = (head->next)->next;
	b = head->next;

	while (a)
	{
		if (a == b)
		{
			b = head;
			while (a != b)
			{
				nodes++;
				a = a->next;
				b = b->next;
			}
			b = b->next;
			while (a != b)
			{
				nodes++;
				b = b->next;
			}
			return (nodes);
		}
		b = b->next;
		a = (a->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - A func that prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: returns the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes;
	size_t position = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		position = 0;
		while (position < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			position++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
