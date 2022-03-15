#include "main.h"

/**
 * _islower - Entry point for the program
 *
 * @c: character to be checked
 *
 * Return: Always 0 for success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
