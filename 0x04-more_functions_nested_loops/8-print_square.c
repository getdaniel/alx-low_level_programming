#include "main.h"

/**
 * print_square - prints square asterix
 *
 * @size: the size of square to be printed
 *
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putcahr('#');

			_putchar('\n');
		}
	}
}
