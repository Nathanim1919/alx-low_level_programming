#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	while ((c != 'e') || (c != 'q'))
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
