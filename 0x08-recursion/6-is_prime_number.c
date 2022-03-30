#include "main.h"

int calc_prime(int, int);

/**
 * is_prime_number - test wether a number is prime or not
 *
 * @n: integer number to be tested
 *
 * Return: 1 if integer is prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (calc_prime(n, n - 1));
}

/**
 * calc_prime - test an integer is prime or not
 *
 * @n: number to be evaluated
 * @i: looper
 *
 * Return: 1 if prime, 0 if not
 */
int calc_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (calc_prime(n, i - 1));
}
