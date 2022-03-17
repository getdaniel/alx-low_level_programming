#include "main.h"

/**
 * print_line - prints straight line"
 *
 * @n: numbers to be line length.
 *
 * Return: number of lines
 */
void print_line(int n)
{
	int k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (k = 0; k < n; k++)
			_putchar('_');

		_putchar('\n');
	}
}
