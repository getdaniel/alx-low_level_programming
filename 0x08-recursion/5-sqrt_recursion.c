#include "main.h"

int calc_sqrt(int, int);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to be rooted
 *
 * Return: the sqaure root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (calc_sqrt(n, 0));
}

/**
 * calc_sqrt - calculates the sqaure root of a number
 *
 * @n: number to sqaure root of it
 * @i: looper
 *
 * Return: the result of the square root
 *
 */
int calc_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (calc_sqrt(n, i + 1));
}
