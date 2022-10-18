#include <stdio.h>

/**
 * main - Fibinacci one
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	/* initialize first and second terms */
	int t1 = 1, t2 = 2;

	/*  initialize the next term (3rd term) */
	int nextTerm = t1 + t2;

	/*  print the first two terms */
	printf("%d, %d, ", t1, t2);

	/* print 3rd to nth terms */
	for (i = 3; i <= 50; i++)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return (0);
}
