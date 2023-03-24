#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: a char type pointer
 * @accept: a pointer
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c1, c2;

	for (c1 = 0; s[c1] != '\0'; c1++)
	{
		for (c2 = 0; accept[c2] != '\0'; c2++)
		{
			if (s[c1] == accept[c2])
			{
				break;
			}
		}
		if (!(accept[c2]))
		{
			break;
		}
	}
	return (c1);
}
