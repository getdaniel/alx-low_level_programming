#include <stdio.h>

/**
 * main - prints all arguments it recieves
 *
 * @arc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Always 0(success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
