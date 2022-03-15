#include <stdio.h>

/**
 * print_to_98 - prints natural numbers
 *
 * @n: argument to evaluate
 *
 * Return: Always 0 for success
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
