#include "main.h"
/**
 * *_memcpy - copies n bytes from memory area src to dest
 * @dest: memory area dest
 * @src: src memory area
 * @n: n bygtes to be copied
 * Return: char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n >= 0; i++)
	{
		dest[i] = src[i];
		n -= 1;
	}
	return (dest);
}
