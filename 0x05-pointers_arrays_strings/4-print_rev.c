#include "main.h"

/**
 * print_rev - prints a string in reverse order
 *
 * @s: string to be reversed
 *
 * Return: reversed string of s
 */
void print_rev(char *s)
{
	int counter = 0;
	int i, num;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	for (num = (counter - 1); num >= 0; num--)
	{
		_putchar(s[num]);
	}
	_putchar('\n');
}
