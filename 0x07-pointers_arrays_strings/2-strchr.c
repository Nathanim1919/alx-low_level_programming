#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: a string s
 * @c:  a character
 * Return: a pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
				p[j] = s[i];
				i++;
				j++;
			}
		}
		i++;
	}
	return (p);
}
