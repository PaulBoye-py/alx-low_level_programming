#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDit = n % 10;

	if (lastDit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDit);
	} else if (lastDit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDit);
	} else if (lastDit < 6 && lastDit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDit);
	}
	return (0);
}
