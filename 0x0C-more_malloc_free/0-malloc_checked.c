#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - a function that allocates memory
 * @b: size of the allocated memory
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);
	return (c);
}
