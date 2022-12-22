#include "main.h"
/**
 * reverse_array - reverse the contant of an array of integers.
 * @a: array to be reversed
 * @n: the numbers of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}

