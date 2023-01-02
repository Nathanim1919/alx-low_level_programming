#include "main.h"
/**
 * *_strpbrk - searches a string for any as et of bytes
 * @s: a pointer
 * @accept: char pointfer
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int c;

	for (; *s != '\n'; s++)
	{
		for (n = 0; accept[n] != '\n'; n++)
		{
			if (*s == accept[n])
				return (s);
		}
	}
	return (0);
}
