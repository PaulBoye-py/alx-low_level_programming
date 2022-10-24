#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - function that prints half
 *		of a string, followed by
 *		a new line.
 *
 * @str: function param
 */

void puts_half(char *str)
{
	int i;
	int l  = _strlen(str);
	int n = (_strlen(str) - 1) / 2;

	if (l % 2 == 0)
	{
		for (i = (l / 2); i <= l; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (n % 2 != 0)
	{
		for (i = n; i <= l; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
