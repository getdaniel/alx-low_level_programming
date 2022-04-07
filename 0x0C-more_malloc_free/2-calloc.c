#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array using malloc
 *
 * @nmemb: - an array of integer
 * @size: number of bytes
 *
 * Return: NULL if nmemb or size is 0 or malloc fails
 *         pointer to the allocated memory if ok
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	char *filler;
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index  = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
