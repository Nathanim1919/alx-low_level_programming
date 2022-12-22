#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: dest string
 * @src: src string
 * Return: resturns a char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	while (dest[i] != '\n')
	{
		i++;
	}

	for (j = 0; && src[j] != '\n')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
