#include "main.h"
/**
 * print_rev - prints astring in reverse
 * @s: arg s
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (i >= 0)
	{
		_putchar(s[i--]);	
	}
	_putchar('\0');
}
