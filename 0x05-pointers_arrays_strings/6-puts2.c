#include "main.h"

/**
 * puts2 - prints a character every one jump
 *
 * @str: string to be evaluated.
 *
 * Return: jumped character
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}

	_putchar('\n');
}
