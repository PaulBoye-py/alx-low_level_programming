/*
 * File: 0-positive_or_negative.c
 * Auth: Paul A Aderoju
 */
#include <stdlib.h>
#include <time.h>
/**
 * main-Prints a random number and checks if it is 0, positive or negative.
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n)
	} else if (n == 0)
	{
		printf("%d is zero\n", n)
	} else if (n < 0)
	{
		printf(n "%d is negative\n", n)
	}
	return (0);
}
