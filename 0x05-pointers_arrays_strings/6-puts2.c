#include "main.h"
/**
 * puts2 - print every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if(i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
