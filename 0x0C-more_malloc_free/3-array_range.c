#include "main.h"
#include <stdlib.h>
/**
 * *array_range - function that craetes an array of integeres
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * max);
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < max)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
