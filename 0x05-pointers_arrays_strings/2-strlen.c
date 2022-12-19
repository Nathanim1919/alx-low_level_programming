#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: a string pointer
 * Return: return astring length
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		++s;
		++length;
	}
	return (length);
}
