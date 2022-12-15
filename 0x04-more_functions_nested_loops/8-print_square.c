#include "main.h"
/**
 * print_square - prints a square
 * @size: the size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (size > 0)
		{
			while (size > 0)
			{
				_putchar('#');
				size--;
			}
			_putchar('\n');
			size--;
		}
	}
}

