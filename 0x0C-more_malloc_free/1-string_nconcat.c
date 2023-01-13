#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of the memory that is gonna be allocated
 * Return:pointer to s1, n beytes of s2:
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int j;
	unsigned int i;
	unsigned int count1;
	unsigned int count2;

	count1 = 0;
	count2 = 0;

	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	if (n > count2)
		n = count2;
	str = malloc(sizeof(char) * (count1 + (n + 1)));
	if (str == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (i < count1)
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < n)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
