#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int count;
	long int num = 612852475143, maxPrime;

	while ((num % 2) == 0)
	{
		/**
		 * printf("%d ", 2);
		 */
		maxPrime = 2;
		num /= 2;
	}

	for (count = 3; count <= sqrt(num); count += 2)
	{
		while ((num % count) == 0)
		{
			/**
			 * printf("%d ", count);
			 */
			maxPrime = count;

			num /= count;
		}
	}

	if (num > 2)
		/**
		 * printf("%lu", num);
		 */
	maxPrime = num;

	printf("%lu", maxPrime);

	putchar('\n');

	return (0);
}
