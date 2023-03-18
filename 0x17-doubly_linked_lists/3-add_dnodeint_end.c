#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end of list
 * @n: data for the newly added node
 * @head: the head pointer
 * Return:the address of the newly created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	while ((*head)->next != NULL)
	{
		(*head) = (*head)->next;
	}
	(*head)->next = newnode;
	return (newnode);
}
