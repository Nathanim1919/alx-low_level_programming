#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: point to the head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *last;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		last = (*head)->next;
		free(*head);
		*head = last;
	}
	*head = NULL;
}
