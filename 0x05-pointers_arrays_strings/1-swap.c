#include "main.h"
/*
 *swap_int - swaps the value of two integers.
 * @a: the first integer to be swaped
 * @b: the second number to be swaped
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
