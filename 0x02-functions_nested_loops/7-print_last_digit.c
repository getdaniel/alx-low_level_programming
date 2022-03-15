#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @num: the number to be computed.
 *
 * Return: x after the computation.
 */
int print_last_digit(int num)
{
	int x = num % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');

	return (x);
}
