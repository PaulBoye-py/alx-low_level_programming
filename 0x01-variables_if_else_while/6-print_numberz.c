#include <stdio.h>

/**
 * main - Numberz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;

	for (; number < 10; number++)
		putchar('0' + number);

	putchar('\n');

	return (0);

}
