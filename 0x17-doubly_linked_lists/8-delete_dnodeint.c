#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at agiven  index
 * @head: head of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head)->next = *head;
		(*head)->prev = NULL;
		return (1);
	}

	while (*head != NULL)
	{
		if ((*head)->next == NULL)
		{
			(*head)->prev == NULL;
			return (1);
		}

		if (i == index)
		{
			(*head)->prev = (*head)->next;
			return (1);
		}
		i++;
	}
	return (-1);
}
