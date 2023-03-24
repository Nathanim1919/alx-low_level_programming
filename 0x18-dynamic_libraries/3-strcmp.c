#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return:return int
 */
int _strcmp(char *s1, char *s2)
{
	int count, cmpValue;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}

	cmpValue = s1[count] - s2[count];
	return (cmpValue);
}
