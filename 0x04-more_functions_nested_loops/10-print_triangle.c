#include "main.h"

/**
 * print_triangle - prints triangle shape with #
 *
 * @size: size of the triangle
 *
 * Return: nothing only the result.
 */
void print_triangle(int size)
{
	int row, col, tri;

	if (size <= 0)
		_putchar('n');
	else
	{
		for (row = 0; row < (size - 1); row++)
		{
			for (col = 0; col < (size - 1) - row; col++)
				_putchar(' ');

			for (tri = 0; tri <= row; tri++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
