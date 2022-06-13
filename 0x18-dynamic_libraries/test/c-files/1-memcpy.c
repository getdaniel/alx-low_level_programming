#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @dest: destination of the copies
 * @src: source of the memory copy area
 * @n: number of copies
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int  i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
