#include "main.h"

/**
 * _abs - A function that computes the absolute value of an integer.
 * @n: Integer to be checked.
 *
 * Return: The absolute value of the integer.
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
