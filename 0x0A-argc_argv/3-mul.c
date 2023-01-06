#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments that passed into the programme
 * @argv: array of strings
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n",a * b);
		return (0);
	}
	printf("Error");
	return (1);
	
}
