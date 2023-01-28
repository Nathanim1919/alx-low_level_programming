#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: a pointer to the head of a list
 * @str: data of the node
 * Return: the address of the new element, or Null if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *newnode, *last;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(newnode);
		return (NULL);
	}
	len = 0;
	while (str[len])
		len++;

	newnode->str = dup;
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newnode;
	}
	return (*head);
}

