#include "lists.h"
/**
 * free_listint - frees a listint_t
 * @head = head of alist
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *last;

	while (head)
	{
		last = head->next;
		free(head->str);
		free(head);
		head = last;
	}
}
