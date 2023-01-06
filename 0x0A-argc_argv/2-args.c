#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments passed into the program
 * @argv: array of string arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
