#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int a = 0;
	int b;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			int c = a * b;

			_putchar(c);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
