#include "main.h"

/**
 * _strcpy - copy string from one to another.
 *
 * @dest: to be copied to.
 * @src: to be copied from.
 *
 * Return: returns dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j, k;

	j = 0;

	while (src[j])
		j++;

	for (i = 0, k = 0; src[k]; k++)
		dest[i++] = src[k];
	dest[i] = '\0';

	return (dest);
}
