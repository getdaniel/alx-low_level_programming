#include "main.h"

/**
 * *_strcpy - copy *src to *dest
 *
 * @dest: destination of copy
 * @src: source of copied character
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
