#include "main.h"
/**
 * _isupper - checks wether a char is upper or or not
 * @c: char to check
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
