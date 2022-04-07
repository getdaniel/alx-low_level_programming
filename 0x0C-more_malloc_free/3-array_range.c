#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *
 * @min: minimum array
 * @max: maximum array
 *
 * Return: Pointer to the newly created array 
 *         otherwise NULL if min > max and malloc files
 */
int *array_range(int min, int max)
{
	int *arr, i, j = 0;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * (max - min + 1));

	if (ar == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ar[j] = i;
		j++
	}

	return (ar);
}
