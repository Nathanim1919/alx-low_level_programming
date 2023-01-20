#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum of all its parametres
 * @n: number of parametres
 * Return: the of all its parametres
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	int sum;
	va_list ap;
	unsigned int count;

	sum = 0;
	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
