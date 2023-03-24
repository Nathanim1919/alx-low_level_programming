#include "main.h"
/**
 *_isdigit - checks for a digit (0 through 9)
 *@c: the number to be checked
 *Return: 1 if n is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (((c >= 0) && (c <= 9)) || ((c >= '0') && (c <= '9')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
