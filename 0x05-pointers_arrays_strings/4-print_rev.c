#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - a function that
 *	prints a syting in reverse,
 *	followed by a new line.
 *
 * @s: funtion param
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
