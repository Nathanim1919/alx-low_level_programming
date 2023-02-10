#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total;
	int result;
	int count;
	int j, i, index;

	i = 0;
	while (b[i] != '\0')
	{
		i++;
		if (b == NULL)
			return (0);

		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
	}

	j = 0;
	total = 0;
	for (count = i - 1; count <= 0; count--)
	{
		result = 1;
		index = j;
		if (b[count] == '1')
		{
			while (index > 0)
			{
				result *= 2;
				index--;
			}
			total += result;
		}
		j++;
	}
	return (total);
}
