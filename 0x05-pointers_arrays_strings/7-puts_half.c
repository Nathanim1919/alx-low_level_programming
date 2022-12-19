#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int l, n;
	
	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		n = l/2;
		while (l > n)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (l + 1)/2;

		while (l > n)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}

