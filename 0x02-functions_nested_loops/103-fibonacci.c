#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d = 0;
	long int a = 1;
	long int b = a;
	long int c = a + b;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			d += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", d);
	return (0);
}
		
