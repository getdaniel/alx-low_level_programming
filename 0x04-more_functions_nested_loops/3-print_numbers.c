#include "main.h"

/**
 * print_numbers - prints all digits
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');

	putchar('\n')
}
