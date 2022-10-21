#include "main.h"

/**
 * print_square - Print a square with #
 * @size: The size of the square.
 */

void print_square(int size)
{
	int hei;
	int wid;

	if (size > 0)
	{
		for (hei = 0; hei < size; hei++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');
			if (hei == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
