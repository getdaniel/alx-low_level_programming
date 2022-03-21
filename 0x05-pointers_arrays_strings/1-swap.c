#include "main.h"

/**
 * swap_int - swaps two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return the swap numbers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
