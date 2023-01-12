#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - realloctes a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: size of the allocated space for ptr
 * @new_size: the size of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	if (ptr == NULL)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
