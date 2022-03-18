#include "main.h"

/**
 * print_number - prints an integer by only using putchar.
 *
 * @n: integer to be printed.
 */
void print_number(int n)
{
	int INT_MIN = -2147483647 - 1;
	int INT_MAX = 2147483647;

	if (n < 0 && (n > INT_MIN && n < INT_MAX))
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 && (n > INT_MIN && n < INT_MAX))
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
