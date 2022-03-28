#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 *                  a square matrix of integers
 *
 * @a: square matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	unsigned int sum0 = 0, sum1 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum0 += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum0, sum1);
}
