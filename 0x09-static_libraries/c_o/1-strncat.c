#include "main.h"

/**
 * *_strncat - concatenates two string form n index of dest
 *
 * @dest: destination of concatenated string.
 * @src: source of the concatenating string.
 * @n: n bytes from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, i = 0;

	while (dest[destlen])
	{
		destlen++;
	}

	while (i < n && src[i])
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}

	dest[destlen + n + 1] = '\0';

	return (dest);
}
