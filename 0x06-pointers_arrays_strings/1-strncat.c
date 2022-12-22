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
	int j = 0;
	int length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	while ((j < n) && (src[j] != '\0'))
	{
		length++;
		j++;
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
