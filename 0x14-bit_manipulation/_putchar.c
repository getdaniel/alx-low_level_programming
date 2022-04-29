#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the character ch to stdout.
 *
 * @ch: The character to be printed.
 *
 * Return: 1 if success, or -1 if failed.
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
