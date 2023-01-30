#include "lists.h"
#include <string.h>
/**
 * *add_nodeint - adds new node at the beginning of a listint_t
 * @head: apointer to the pionter of head
 * @n: node value
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;
	const int dup;

	node = malloc(sizeof(listint_t));

	if (node  == NULL)
		return (NULL);

	dup = strdup(n);
	if (dup == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
