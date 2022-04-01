#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: 0 if no number arguments are passed
 *         1 if there is arg other than numbers
 */
int main(int argc, char **argv)
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");

				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
