#include "main.h"

/**
 * print_line - Draws a diagonal line using the \ character
 * @n: The number of \ characters to be printed.
 */

void print_diagonal(int n)
{
	int l, space;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (space = 0; space < l; space++)
				_putchar(' ');
			_putchar('\\');

			if (l == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
