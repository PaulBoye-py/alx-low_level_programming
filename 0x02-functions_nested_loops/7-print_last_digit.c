#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: number to be checked.
 *
 * Return: Last digit of the number.
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
