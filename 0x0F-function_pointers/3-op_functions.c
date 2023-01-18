#include "3-calc.h"
/**
 * op_add - function that adds a and b
 * @a: int
 * @b: int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts b from a
 * @a: int
 * @b: int
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that mltiplies a with b
 * @a: int
 * @b: int
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides a by b
 * @a: int
 * @b: int
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the reminder of the division of a by b
 * @a: int
 * @b: int
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
