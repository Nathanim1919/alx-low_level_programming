#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes
 * @size: size of an array
 * @c: specific char
 * Return: apointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
