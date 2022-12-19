#include "main.h"
/*
 * swap_int - swap the values of two intefers
 * @a: pointer to integer a
 * @b: pinter to integer b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
