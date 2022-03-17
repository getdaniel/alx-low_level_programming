#include "main.h"

/**
 * print_most_numbers - prints nums from 0 to 9 without 2 & 4
 *
 * Return: 0 - 9
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar('i');
	}
	_putchar('\n');
}
