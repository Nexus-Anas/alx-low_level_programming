#include "lists.h"

/**
 * sum_listint - This func calculates the sum
 *		of all data in a listint_t list
 * @head: The first node in the linked list
 * Return: return sum
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_listint(head->next));
}
