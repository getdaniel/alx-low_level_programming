#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @c: string to be evaluated.
 *
 * Return: i
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (p[i])
	{
		if (p[i] >= 97 && p[i] <= 122)
			p[i] -= 32;

		i++;
	}

	return (i);
}
