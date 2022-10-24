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
	int len;
	int n;

	while (str[i++])
		len++;
	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
