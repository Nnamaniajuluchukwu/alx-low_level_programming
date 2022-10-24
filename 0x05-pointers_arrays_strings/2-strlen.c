#include "main.h"

/**
 * _strlen - get the length of a string.
 *
 * @s: param
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;

	return (i);
}
