#include "main.h"
/**
 * *_strstr - a function that locates a substring
 * @haystack:  a string
 * @needle: a substring
 * Return: return apointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; haystack[0]; haystack++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
			;

		if (!(needle[i]));
			return (haystack);
	}
	return (0);
}
