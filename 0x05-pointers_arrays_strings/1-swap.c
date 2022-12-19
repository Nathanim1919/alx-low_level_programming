#include "main.h"

/**
 * swap_int - swaps the values of two intefers.
 *
 * @a: arg a
 *
 * @b: arg b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
