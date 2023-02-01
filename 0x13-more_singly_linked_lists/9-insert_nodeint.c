#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts anew node at a given position
 * @head: pointer to the pointer of linked list head
 * @idx: the index of the new node added
 * @n: value of the newly added node
 * Return: the address of the newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *newnode, *b_newnode;
	unsigned int count;

	count = 0;
	current = *head;
	if (current == NULL)
	{
		if (idx == 0)
		{
			newnode = malloc(sizeof(listint_t));
			if (!newnode)
				return (NULL);
			current = newnode;
			newnode->n = n;
			newnode->next = NULL;
		}
		return (NULL);
	}

	while (current)
	{
		if (count == idx - 1)
			b_newnode = current;

		if (count == idx)
		{
			newnode = malloc(sizeof(listint_t));
			if (!newnode)
				return (NULL);
			b_newnode->next = newnode;
			newnode->next = current;
			newnode->n = n;
			return (newnode);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
