#include "lists.h"
/**
 * dlistint_len - returs the number of elements
 * @h: the head node of the struct
 * Return: nuber of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
