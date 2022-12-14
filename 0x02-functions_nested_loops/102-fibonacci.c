#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int count = 2;
	int a = 1;
	int b = a + 1;
	int c = a + b;

	printf("%d, %d, ", a, b);
	while (counter < 50)
	{
		printf("%d", c);
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
