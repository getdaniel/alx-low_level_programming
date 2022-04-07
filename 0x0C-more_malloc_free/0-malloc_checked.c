#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: The number of bytes to be allocated dynamically
 *
 * Return:  a pointer to an allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
