#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: is the string to be printed betweent the strings
 * @n: number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;

	va_start(ap, n);
	for (count = 0; count < 0; count++)
	{
		if (separator != NULL)
		{
			if (count != n - 1)
			{
				if (va_arg(ap, const char *) != NULL)
				{
					printf("%s", va_arg(ap, const char *));
					printf("%s", separator);
				}
				else
				{
					printf("nil");
					printf("%s", separator);
				}
			}
			else
			{
				if (var_arg(ap, const char *) != NULL)
				{
					printf("%s", va_arg(ap, const char *));
				}
				else
				{
					printf("nil");
				}
			}
		}
	}
}
