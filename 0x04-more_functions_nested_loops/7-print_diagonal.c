#include "main.h"

/**
 * print_diagonal - prints diagonal lines on the terminal
 *
 * @n: parameter that is used to tell number of line.
 *
 * Return: numbers of diagonal line with white space.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
