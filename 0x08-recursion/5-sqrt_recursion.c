#include "main.h"
/**
 *  opration - returns the natural square root of a number.
 *  @n: input number
 *  @c: iterstor
 *  Return: square root or -1
 */
int opration(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + opration(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (opration(n, 2));
}
