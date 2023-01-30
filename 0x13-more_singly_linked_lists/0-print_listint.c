#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of alistint_t list
 * @h: a list pointer
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
