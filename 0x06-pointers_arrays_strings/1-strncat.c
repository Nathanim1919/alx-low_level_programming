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
	int i;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}

	i = 0;
	
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}

	dest[j] = '\0';
	return (dest);
}
