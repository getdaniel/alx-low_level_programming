#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e')
			continue;
		else if (c == 'q')
			continue;
		else
			putchar(c);
	}
	putchar('\n');

	return (0);
}
