#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the doubly linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
