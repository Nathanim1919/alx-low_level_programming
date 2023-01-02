#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: a string s
 * @c:  a character
 * Return: a pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	while (s[0] == c)
	{
		if (s[0] == c)
		{
			return (s);
		}
		else if (s[1] == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
}
