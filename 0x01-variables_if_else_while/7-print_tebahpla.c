#include <stdio.h>

/**
 * main - Printing alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char leta;

	for (leta = 'z'; leta >= 'a'; leta--)
		putchar(leta);

	putchar('\n');

	return (0);

}
