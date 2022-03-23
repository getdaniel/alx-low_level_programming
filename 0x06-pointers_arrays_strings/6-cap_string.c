#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 *
 * @c: string to be capitalize
 *
 * Return: c
 */
char *cap_string(char *c)
{
	int i, a, cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (c[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || c[a - 1] == spc[i]) && (c[a] >= 97 && c[a] <= 22))
				c[a] -= 32;

			i++;
		}

		a++;
	}

	return (c);
}
