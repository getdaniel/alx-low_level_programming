#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 *
 * @b: pointers of a buffer
 * @size: size in bytes of the content
 *
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int byte = 0, index = 0;

	for (; byte < size; byte += 10)
	{
		printf("%08: ", byte);

		for (; index < 10; index++)
		{
			if ((index + byte) >= size)
				printf(" ");
			else
				printf("%02x", *(b + index + byte));

			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}

		for (; index < 10; index++)
		{
			if ((index + byte) >= size)
				break;
			else if (*(b + index + byte) >= 31 &&
				*(b + index + byte) <= 126)
				printf("%c", *(b + index + byte));
			else
				printf(".");
		}

		if (byte >= size)
			continue;
		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
