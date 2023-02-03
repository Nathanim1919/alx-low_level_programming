#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int j;
	int result;
	int iterator;
	unsigned int total;

	if (!b)
		return (0);
	j = 0;
	while (b[j])
	{
		if (b[j] != '0' || b[j] != '1')
		{
			return (0);
		}
		j++;
	}

	for (i = 0; i < j; i++)
	{
		if (b[i] == '1')
		{
			result = 1;
			for (iterator = 0; iterator < i; i++)
			{
				result = result * 2;
			}
			total += result;
		}
	}
	return (total);
}
