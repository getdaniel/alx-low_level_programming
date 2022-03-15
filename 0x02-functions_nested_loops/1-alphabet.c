#include "main.h"

/**
 * print_alphabet -Entry point of the program
 *
 * Return: Always 0 for success
 */
void print_alphabet(void);
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');

	return (0);
}
