#include "lists.h"
/**
 * pop_listint - deletes the head of node of a listint_t linked list
 * @head: head pointer of the node
 * Return: the head data
 */
int pop_listint(listint_t **head)
{
	int hvalue;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;
	hvalue = current->n;
	h = current->next;
	free(current);
	*head = h;
	return (hvalue);
}
