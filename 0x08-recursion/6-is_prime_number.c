#include "main.h"
/**
 * is_prime_number - check the number is a prime number or not
 * @n: input integer
 * Return: 1 if prime number 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (is_prime(n, 2));
}
/**
 * is_prime - checks a number is prime or not
 * @n: a number to be checked
 * @c: a number for checking n
 * Return: 0 or 1
 */
int is_prme(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + is_prime(n, c + 1));
}
