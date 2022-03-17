#include <stdio.h>

/**
 * main - prints 1 - 100 with multiple of 3 prints Fizz
 *                       with multiple of 5 print Buzz
 *                       with multiple of both 3 & 5 print FizzBuzz
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (((num % 3) == 0) && ((num % 5) == 0))
		{
			printf("FizzBuzz ");
			continue;
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
			printf("%d ", num);
	}
	putchar('\n');

	return (0);
}
