#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: a string s
 * @c:  a character
 * Return: a pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;
	int n;
	char *p;

	n = 0;
	while (s[n] != '\n')
	{
		n++;
	}

	for (i = 0; i < n; i++)
	{
		if (s[i] == c)
		{
			j = 0;
			while (s[i] != '\n')
			{
				p[j] = s[i];
				j++;
			}
		}
	}
return (p);
}
