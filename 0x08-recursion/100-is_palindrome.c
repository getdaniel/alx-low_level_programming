#include "main.h"

int _strlen_recursion(int);
int check_palindrome(char, int, int);

/**
 * is_palindrome - returns 1 if number is palindrom or 0 if not
 *
 * @s: pointer character to be tested
 *
 * Return: 1 if palindrom, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - retuns the length of a string
 *
 * @s: string to be lengthned
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks a number is palindrome or not
 *
 * @s: string to be checked
 * @i: looper
 * @len: length of the string
 *
 * Return: 1 if palindrom, 0 if not
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (check_palindrome(s, i + 1, len - 1));
}
