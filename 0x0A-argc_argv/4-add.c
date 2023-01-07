#include <stdio>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: the number of argumets passed to the program
 * @argv: array of string
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *ptr;
	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
