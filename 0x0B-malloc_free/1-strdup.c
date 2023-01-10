#include "main.h"
#include <stdlib.h>
/**
 * *_strdup -returns a pointer to a newly allocated space in memory,
 * @*str: a string givens as aparameter
 * Return:apointer to a newly created space in memory
 */
char *_strdup(char *str)
{
	int i, j;
	char *str1;

	if (str == NULL)
	{
		return (str);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	str1 = malloc(sizeof(char) * i);

	j = 0;
	while (i >= 0)
	{
		str1[j] = str[j];
		j++;
	}
	return (str1);
}
