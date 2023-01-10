#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concates two strings.
 * @s1: firt string to concatinate witn second string
 * @s2: second string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, n;
	char *str;

	if (s1 == NULL)
		s1[0] = '\0';

	if (s2 == NULL)
		s2[0] = '\0';

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	n = i + j;
	str = malloc(sizeof(char) * n);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	return (str);
}
