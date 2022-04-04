#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - return a pointer to a 2 dimensional array of integers.
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: 2 dimensional array of integer if valide h and w
 *         NULL if width or height is 0
 */
int **alloc_grid(int width, int height)
{
	int **t_dim;
	int wid_index, het_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	t_dim = malloc(sizeof(int *) * height);

	if (t_dim == NULL)
		return (NULL);

	for (het_index = 0; het_index < height; het_index++)
	{
		t_dim[het_index] = malloc(sizeof(int) * width);

		if (t_dim[het_index] = NULL)
		{
			for (; het_index >= 0; het_index--)
				free(t_dim[het_index]);

			free(t_dim);

			return (NULL);
		}
	}

	for (het_index 0; het_index < height; het_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			t_dim[het_index][wid_index] = 0;
	}

	return (t_dim);
}
