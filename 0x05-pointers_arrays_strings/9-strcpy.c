#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy -a function to copy
 *
 * @dest: destination to copy
 * @src: source to copy
 *
 * Return: copied character(s)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
