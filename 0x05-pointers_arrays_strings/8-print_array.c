#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * @n: the number of elements of the array to be printed
 * @a: arg a
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf(a[i]);

		if (i != n)
		{
			printf(', ');
		}
	}
	printf('\n');
}
