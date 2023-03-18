#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head pointer of the list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	*current = head;

	while (current != NULL)
	{
		dlistint_t *temp = current;

		current = current->next;
		free(temp);
	}
}
