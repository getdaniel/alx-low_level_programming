#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: string that converted to integer
 *
 * Return: an integer that converted from string
 */
int _atoi(char *s)
{
	int c, sign, offset, n;

	if (s[0] == '-')
	{
		sign = -1;
	}
	if (sign == -1)
		offset = 1;
	else
		offset = 0;

	n = 0;

	for (c = offset; s[c] != '\0'; c++)
		n = n * 10 + s[c] - '0';

	if (sign == -1)
		n = -n;

	return (n);
}
