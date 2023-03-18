#include "lists.h"
/**
 * insert_dnodeint_at_index - insert anew node at a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: data of the new node
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;

		if (*h != NULL)
			(*h)->prev = newnode;
		return (newnode);
	}

	dlistint_t *current = *h;

	while (current != NULL)
	{
		if (idx == count)
		{
			newnode->next = current;
			newnode->prev = current->prev;
			current->prev = newnode;
		}
		count++;
	}
	return (newnode);
}
