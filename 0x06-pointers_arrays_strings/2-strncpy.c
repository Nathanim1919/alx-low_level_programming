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

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
