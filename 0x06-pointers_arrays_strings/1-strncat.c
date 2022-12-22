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
	int i = 0;

	while (dest[j] != '\0')
	{
		j++;
	}	
	while (j < n && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}

	dest[j] = '\0';
	return (dest);
}
