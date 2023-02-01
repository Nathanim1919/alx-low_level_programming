#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head pointer of listint_t linked list
 * @index: index of the node, starting at 0
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nthnode;
	listint_t *h;
	unsigned int count;

	h = head;
	while (head)
	{
		if (count == index)
		{
			nthnode = head;
			return (nthnode);
		}
		head = h->next;
		count++;
	}
	return (NULL);
}
