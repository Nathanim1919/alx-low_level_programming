#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - prints the number of elements in a linked list
 * @h: the list_list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t number_of_elements = 0;

	while (h)
	{
		number_of_elements++;
		h = h->next;
	}
	return (number_of_elements);
}
