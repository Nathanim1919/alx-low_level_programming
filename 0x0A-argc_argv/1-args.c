#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments passed into the program
 * @argv: array of strings of the arguments
 * Return: Always 0  (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
