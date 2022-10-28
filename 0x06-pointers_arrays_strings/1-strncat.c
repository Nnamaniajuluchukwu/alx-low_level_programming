#include "main.h"

/**
 * _strncat - concat n strings
 *
 * @dest: destination
 * @src: source
 * @n int
 *
 * Return: dest new
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		++i;

	for (j = 0; j < n && src[j]; j++)
		dest[i++] = src[j];

	if (!src[j])
		dest[i] = '\0';

	return (dest);
}
