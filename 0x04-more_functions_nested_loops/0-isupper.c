#include "main.h"

/**
 * isupper - a function that checks for uppercase characters.
 * @c - character to check
 *
 * Return: 1 if uppercase, 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
