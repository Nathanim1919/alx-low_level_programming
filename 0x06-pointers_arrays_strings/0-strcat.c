#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: dest string
 * @src: src string
 * Return: resturns a char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		dest += src[i];
		i--;
	}
	return (dest);
}
