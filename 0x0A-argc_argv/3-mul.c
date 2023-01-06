#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments that passed into the programme
 * @argv: array of strings
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	if (argc < 2)
	{
		printf("Error");
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
