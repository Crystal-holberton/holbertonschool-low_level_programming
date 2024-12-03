#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n)
 * of a dlistint_t linked list
 * @head: head of doubly linked list
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
