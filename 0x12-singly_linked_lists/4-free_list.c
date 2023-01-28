#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a list_t list
 * @head: a pointer to the head of the linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *last;

	while (head)
	{
		last = head->next;
		free(head->str);
		free(head);
		head = last;
	}
}
