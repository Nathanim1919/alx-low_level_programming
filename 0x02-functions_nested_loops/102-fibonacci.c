#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int count = 2;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);
	while (count < 50)
	{
		printf("%ld", c);
		count++;
		a = b;
		b = c;
		c = a + b;
		if (count < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
