#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10) 
	{
		putchar(i); /* there should be increament after this line to avoid infinite */
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
