#include "lists.h"

/**
 * create_new_node - create new node with value
 * @n: data
 * Return: pointer to new node
 */
dlistint_t *create_new_node(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_head - insert node at beginning
 * @h: double pointer to head
 * @new_node: pointer to new node
 * Return: pointer to new node
 */
dlistint_t *insert_head(dlistint_t **h, dlistint_t *new_node)
{
	if (*h)
	{
		(*h)->prev = new_node;
	}
	new_node->next = *h;
	*h = new_node;
	return (new_node);
}

/**
 * insert_after - insert new node after given node
 * @prev_node: pointer to node after new node inserted
 * @new_node: pointer to new node
 * Return: pointer to new node
 */
dlistint_t *insert_after(dlistint_t *prev_node, dlistint_t *new_node)
{
	if (!prev_node)
	{
		return (NULL);
	}
	new_node->next = prev_node->next;
	new_node->prev = prev_node;
	if (prev_node->next)
	{
		prev_node->next->prev = new_node;
	}
	prev_node->next = new_node;
	return (new_node);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the doubly linked list
 * @idx: index of the list where the new node should be added
 * @n: number for new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (!h)
	{
		return (NULL);
	}
	new_node = create_new_node(n);
	if (!new_node)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (insert_head(h, new_node));
	}
	temp = *h;

	for (i = 0; temp && i < idx - 1; i++)
	{
		temp = temp->next;
	}
	if (!temp)
	{
		free(new_node);
		return (NULL);
	}
	return (insert_after(temp, new_node));
}
