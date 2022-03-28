#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 *
 * @s: the string that may or may not contain c
 * @c: character to be find from s
 *
 * Return: if found on s, pointer to the first occurance of c
 *         if not found on s, null
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
			return (s - 1);

		if (i == 0)
			return (NULL);
	}
}
