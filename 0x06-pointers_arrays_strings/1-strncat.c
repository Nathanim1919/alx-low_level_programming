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
	int j;
	int length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (j = 0; j < n && src[j] != '\n'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\n';
	return (dest);
}
