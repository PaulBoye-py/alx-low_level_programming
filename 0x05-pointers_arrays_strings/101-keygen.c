#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate a random password
 *
 * Return: Always 0.
 */

int main(void)
{
	char passw[84];
	int i = 0, sum = 0;
	int d1, d2;

	srand(time(0));

	while (sum < 2772)
	{
		passw[i] = 33 + rand() % 94;
		sum += passw[i++];
	}

	passw[i] = '\0';

	if (sum != 2772)
	{
		d1 = (sum - 2772) / 2;
		d2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			d1++;

		for (i = 0; passw[i]; i++)
		{
			if (passw[i] >= (33 + d1))
			{
				passw[i] -= d1;
				break;
			}
		}

		for (i = 0; passw[i]; i++)
		{
			if (passw[i] >= (33 + d2))
			{
				passw[i] -= d2;
				break;
			}
		}
	}
	printf("%s", passw);

	return (0);
}
