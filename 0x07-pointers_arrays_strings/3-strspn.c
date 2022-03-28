#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointers of string that is evaluated
 * @accept: the substring that searched from s
 *
 * Return: the number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, f = 0, flag;

	for (; s[i] != '\0'; i++)
	{
		flag = 0;

		for (; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}

		if (flag == 0)
			return (f);
	}

	return (0);
}
