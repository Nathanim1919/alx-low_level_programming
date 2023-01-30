#include "lists.h"
/**
 * *add_nodeint_end - adds anew node at the end of a listint_t list
 * @head: points to head
 * @n: value
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	lastnode = *head;
	while (lastnode)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = newnode;
	newnode->n = n;
	newnode->next = NULL;
	return (newnode);
}
