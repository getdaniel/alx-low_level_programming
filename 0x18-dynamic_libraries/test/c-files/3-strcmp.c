#include "main.h"

/**
 * _strcmp - compares two string
 *
 * @s1: string one
 * @s2: string two
 *
 * Returns: positive number if s1 > s2
 *          Negative number if s1 < s2
 *          0 if s1 == s2
 *
 * Return: r
 */
int _strcmp(char *s1, char *s2)
{
	int d = 0, s = 0, c = 0, r = 0, lim;

	while (s1[d])
	{
		d++;
	}

	while (s2[s])
	{
		s++;
	}

	if (d <= s)
		lim = d;
	else
		lim = s;

	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (r);
}
