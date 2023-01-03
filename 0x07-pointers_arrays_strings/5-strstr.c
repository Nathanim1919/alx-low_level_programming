#include "main.h"
/**
 * *_strstr - a function that locates a substring
 * @haystack:  a string
 * @needle: a substring
 * Return: return apointer
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}
	return ('\0');
}
