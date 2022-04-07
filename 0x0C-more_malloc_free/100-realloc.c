#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - realloctaes a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block.
 *
 * Return: not initialize if new_size > old_size
 *         don't do anything and ptr if new_size == old_size.
 *         NULL if new_size is 0 and ptr is not NULL
 *         otherwise return the new_size pointers to.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);

		return (NULL);
	}

	filler = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_copy++;
	free(ptr);

	return (mem);
}
