#include "lists.h"
/**
 * sum_listint - returns the sum of the data of a listint_t
 * @head: pointer to the head of a linked list
 * Return: the sum of all the data or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
