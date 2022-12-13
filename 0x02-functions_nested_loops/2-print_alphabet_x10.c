#include "main.h"
/**
 * print_alphabet_x10 - print alhabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int n = 1;
	char c = 'a';

	while (n <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
		c = 'a';
	}
}
