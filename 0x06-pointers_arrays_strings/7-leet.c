#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @n: astring
 * Return:Return a char
 */
char *leet(char *)
{
		int stringCount, leetCount;
		char leetLetters[] = "aAeEoOtTlL";
		char leetNums[] = "4433007711";

		stringCount = 0;
		while (s[stringCount] != '\0')
		{
			leetCount = 0;
			while (leetCount < 10)
			{
				if (leetLetters[leetCount] == s[stringCount])
				{
					s[stringCount] = leetNums[leetCount];
				}
				leetCount++;
			}
			stringCount++;
		}
		return (s);
}
