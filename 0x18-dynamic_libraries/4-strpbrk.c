#include "main.h"
/**
 * *_strpbrk - searches a string for any as et of bytes
 * @s: a pointer
 * @accept: char pointfer
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int n;

	for (; *s != '\0'; s++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (*s == accept[n])
				return (s);
		}
	}
	return (0);
}
