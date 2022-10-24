#include "main.h"

/**
 * _strlen - function that returns the
 *	length of a string.
 * @s: string to be used.
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
