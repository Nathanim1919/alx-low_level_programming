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
	listint_t *current;
	listint_t *newnode;
	unsigned int count;

	count = 0;
	current = *head;
	while (current)
	{
		if (count == idx - 1)
		{
			newnode = malloc(sizeof(listint_t));
			if (!newnode)
				return (NULL);
			current->next = newnode;
			newnode->next = current->next->next;
			newnode->n = n;
			return (newnode);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
