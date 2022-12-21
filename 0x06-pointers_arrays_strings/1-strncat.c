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
	int i = 1;

	while (i <= n)
	{
		dest += src[i - 1];
		i++;
	}
	return (dest);
}
