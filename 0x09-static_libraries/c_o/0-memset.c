#include "main.h"

/**
 * *_memset - files memory by a constant byte
 *
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy be
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;

	return (s);
}
