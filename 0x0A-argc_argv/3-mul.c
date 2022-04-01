#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a multiple of two numbers
 *
 * @argc: numbers of arguments
 * @argv: arrays of arguments
 *
 * Return: 1 if a program doesn't recieve two numbers
 *         product of two numbers if there are 2 num
 */
int main(int argc, char **argv)
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
