#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer of an array
 * @n: the number of elements of the array
 *
 * Return: reverse content of the array
 */
void reverse_array(int *a, int n)
{
	int *p, i = 1, temp, j = 0;

	p = a;

	for (; i < n; i++)
		p++;

	for (; j < i / 2; j++)
	{
		temp = a[j];
		a[j] = *p;
		*p = temp;
		p--;
	}
}
