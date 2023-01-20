#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_numbers - print numbers folllowed by a nw line
 * @separator: is th string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int count;

	va_start(valist, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(valist, const unsigned int));
		if (separator != NULL && count != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
