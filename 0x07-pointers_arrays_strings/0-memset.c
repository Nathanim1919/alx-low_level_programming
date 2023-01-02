#include "main.h"
/**
 * _memset - filll the first n byte
 * @s: ponters s
 * @b: constant byte b
 * @n: bytes of the memory
 * Return: ap ointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n -= 1;
	}
	return (s);
}
