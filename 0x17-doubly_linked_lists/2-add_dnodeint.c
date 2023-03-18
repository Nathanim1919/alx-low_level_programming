#include "lists.h"
/**
 * add_dnodeint - adds anew node at the beginning
 * @head: the head pointer of the list
 * @n: the data of the newly added node
 * Return: the address of the new elment, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newnode;

	*head = newnode;

	return (newnode);
}
