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
		if (n[i] == ',' || n[i] == '.' || n[i] == '\n' || n[i] == ';' || n[i] == '!' || n[i] == '?' || n[i] == '"' || ')' || n[i] == '(' || n[i] == ' ' || n[i] == '}' || n[i] == '{')
		{
			if (n[i++] >= 97 && n[i] <= 122)
			{
				n[i++] = n[i++] - 32;
			}
		}
	}

	return (n);
}

