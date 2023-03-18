#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of the list
 * @head: head of th list
 * @index: the index of the node to be returned
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
