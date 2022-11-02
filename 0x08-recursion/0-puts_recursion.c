#include "main.h"
#include "_putchar.c"

/**
 * _puts_recursion - function to print a string
 *		and a new line
 *
 * @s: The character to print
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
