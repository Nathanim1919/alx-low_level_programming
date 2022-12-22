#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: dest string
 * @src:src string
 * @n:number of chars to be copied
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';
	return (dest);
}
