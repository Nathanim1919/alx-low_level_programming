#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int c;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
