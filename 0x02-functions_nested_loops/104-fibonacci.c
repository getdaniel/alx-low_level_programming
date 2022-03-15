#include <stdio.h>

/**
 * main - Entry point that compute fibonacci
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum = 0;

	for (count = 0; count < 98; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		if (count == 97)
			printf("\n");
		else
			printf(", ");

		fib1 = fib2;
		fib2 = sum;
	}

	return (0);
}
