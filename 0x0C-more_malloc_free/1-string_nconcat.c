#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of the memory that is gonna be allocated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int j;
	unsigned int i;

	str = malloc(sizeof(char) * n);

	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
	}
	return (str);
}
