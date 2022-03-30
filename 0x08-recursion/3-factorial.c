#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: an integer number to be factorial
 *
 * Return: -1 if n is lower than 0
 *          0 if n is 0
 *          n * factorial(n - 1) if n is greater than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
