#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of integers
 *
 * @a: arrays of pointer to accept the array
 * @n: number of elements of the array to be printed
 *
 * Return: array elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);

		if (i == (n - 1))
			printf("%d", a[n]);
	}

	printf("\n");
}
