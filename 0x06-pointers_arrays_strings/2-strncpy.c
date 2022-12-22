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
	int j = 0;
	char *p;

	while (i < n)
	{
		p[i] = src[i];
		i++;
	}

	while (dest[j] != '\n')
	{
		p[i] = dest[j];
		j++;
	}
	p[j] = '\n';

	return (dest);
}
