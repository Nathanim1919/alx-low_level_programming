#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: A pointer to the first element of the array to be searched
 * @size: The number of elements in the array
 * @value: The value to be searched
 *
 * Return: The first index where `value` is found
 *         -1 if the `array` is NULL or if `value` is not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, start = 0, end = 0;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	/* Jump through block */
	while (array[end] < value && end < size)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end += jump;

	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	/* Handle index out of range */
	if (end >= size)
		end = size - 1;

	/* Linear search through the identified block */
	while (start < end && array[start] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start++;
	}

	printf("Value checked array[%lu] = [%d]\n", start, array[start]);

	if (array[start] == value)
		return ((int)start);

	return (-1);
}
