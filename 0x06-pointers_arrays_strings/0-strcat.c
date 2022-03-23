#include "main.h"

/**
 * *_strcat - concatenates two string
 *
 * @dest: destination of the concatenated string
 * @src: source of concatenated string
 *
 * Return: a pointers to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0, i = 0;

	while (dest[destlen])
	{
		destlen++;
	}

	for (; src[i] != 0; i++)
	{
		dest[destlen] = src[i];
		destlen++;
	}

	dest[destlen] = '\0';

	return (dest);
}
