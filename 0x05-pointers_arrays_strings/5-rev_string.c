#include "main.h"

/**
 * rev_string - function that reverse a string
 *
 * @s: string to be reversed
 *
 * Return: reversed string
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0, i;

	while (s[counter] != '\0')
	{
		counter++;
	}

	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
