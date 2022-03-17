#include "main.h"

/**
 * _isupper - checks a letter for case of upper.
 *
 * @c: character to be checked
 *
 * Return: 1 if upper 0 otherwise.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
