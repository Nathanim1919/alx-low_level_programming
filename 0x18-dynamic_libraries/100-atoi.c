#include "main.h"
/**
 * _atoi - convert a string into integer
 * @s: arg s
 * Return:int
 */
int _atoi(char *s)
{
	int sign, result, index;

	result = 0;
	sign = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == '-')
		{
			sign++;
		}

		if (s[index] > 47 && s[index] < 58)
		{
			while (s[index] > 47 && s[index] < 58)
			{
				result = result * 10 - (s[index++] - 48);
				break;
			}
		}
	}
	return (result *= sign % 2 == 0? -1: 1);
}
