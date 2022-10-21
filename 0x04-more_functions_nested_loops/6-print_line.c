#include "main.h"

/**
 * print_line - Print a line
 * @n - number of times for _
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}

	}
	_putchar('\n');
}
