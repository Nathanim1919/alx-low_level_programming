#include "main.h"
/**
 * *cap_string - capitalazies all words of a string.
 * @n: astring
 * Return: return a capitalized string
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[0] >= 97 && n[0] <= 122)
		{
			n[0] = n[0] - 32;
		}
		if (n[i] == (',' || ' ' || '\t' || '\n' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{' || '}'))
		{
			if (n[i + 1] >= 97 && n[i + 1] <= 122)
			{
				n[i + 1] = n[i + 1] - 32;
			}
		}
		i++;
	}
	return (n);
}
