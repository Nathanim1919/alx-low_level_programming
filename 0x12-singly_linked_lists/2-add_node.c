#include "lists.h"
#include <string.h>
/**
 * *add_node - adds new node at the beginning of a list_t list
 * @head:pointer of a pointer header
 * @str: value of anode
 * Return: updated list_t list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *dup;
	int len;

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
	newnode->next = *head;

	*head = newnode;
	return (newnode);
}
