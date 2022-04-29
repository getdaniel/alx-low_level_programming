#include "main.h"

/**
 * flip_bits - Returns the number of bits that is fliped.
 *
 * @n: First number.
 * @m: Second number.
 *
 * Return: The fliped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, count = 0;
	unsigned long int current, exclusive = n ^ m;

	for (index = 63; index >= 0; index--)
	{
		current = exclusive >> index;

		if (current & 1)
			count++;
	}

	return (count);
}
