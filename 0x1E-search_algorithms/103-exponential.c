#include "search_algos.h"

/**
 * bin_search - searches for a value in a sorted subarray of integers using
 *              Binary search algorithm
 * @array: A pointer to the first element of the array to be searched
 * @low: The starting index of the subarray to be searched
 * @high: The final index of the subarray to searched
 * @value: The value to be searched
 *
 * Return: The index where the value is located,
 *         -1 if the value is not present or NULL
 */
int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		/* Display array elements */
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			(i != high) ? printf(", ") : printf("\n");
		}

		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: A pointer to the first element of the array to be searched
 * @size: The number of elements in the array
 * @value: The value to be searched
 *
 * Return: The first index where `value` is found
 *         -1 if the `array` is NULL or if `value` is not present
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (array == NULL)
		return (-1);

	/* Found at the first position */
	if (array[0] == value)
		return (0);
	i = 1;
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	start = i / 2;
	end = (i < size) ? i : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	return (bin_search(array, start, end, value));
}
