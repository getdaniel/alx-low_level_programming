#include "main.h"

/**
 * _strlen - returns a string length
 *
 * @s: string to be retuned with its length
 *
 * Return: length of s(sum)
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char len = s[0];

	while (len != '\0')
	{
		sum++;
		len = s[i++];
	}

	return (sum);
}
