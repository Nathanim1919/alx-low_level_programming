#include "main.h"
/**
 * *_strncat - concatinate two strings
 * @dest: string one
 * @src: string two
 * @n: number of bytes
 * Return: return char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length = 0;

	while (dest[length] != '\n')
	{
		length++;
	}

	for (i = 0; j < n && src[j] != '\n'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
