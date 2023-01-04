#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s - a char pointer
 * Return: return an int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (*s);
	}
	_strlen_recursion(s + 1);
}

