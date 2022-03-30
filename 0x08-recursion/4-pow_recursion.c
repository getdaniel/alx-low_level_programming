#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: an integer to be multiplied by itself by y times
 * @y: anteger that tells times of multiplication of x
 *
 * Return: value of x raised to y if y is greater than equal to 0
 *         -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
