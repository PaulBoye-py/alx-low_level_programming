#include <stdio.h>

/**
 * main - Alphabet soup
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char leta;

	for (leta = 'a'; leta <= 'z'; leta++)
		if (leta != 'q' && leta != 'e')
			putchar(leta);

	putchar('\n');

	return (0);
}
