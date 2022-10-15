#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char a;

	for (num = 0; num < 10; num++)
		putchar('0' + num);

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);

	putchar('\n');

	return (0);

}
