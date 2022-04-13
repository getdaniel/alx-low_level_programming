#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two numbers.
 *
 * @a: First number.
 * @b: Second number.
 *
 * Return: the addition of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction of two number.
 *
 * @a: First number.
 * @b: Second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two number
 *
 * @a: First number.
 * @b: Second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of 2 numbers.
 *
 * @a: First number.
 * @b: Second number.
 *
 * Return: The division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the module of two number.
 *
 * @a: First number.
 * @b: Second number.
 *
 * Return: The module of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
