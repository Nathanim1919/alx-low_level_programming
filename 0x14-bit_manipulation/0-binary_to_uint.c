#include "main.h"

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
	int j;

	i = 0;
	while (b[i] != '\0')
	{
		i++;
		if (b == NULL || b[i] != "0" || b[i] != "1")
		{
			return (0);
		}
	}

	j = 0;
	total = 0;
	for (count = i - 1; count <= 0; count--)
	{
		result = 1;
		if (b[count] == "1")
		{
			while (j > 0)
			{
				result *= 2;
				j--;
			}
			total += result;
		}
	}
	return (total);
}
