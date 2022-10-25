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

	i = 0;
	j = 0;

	while (dest[i])
		i++;
	while (src[j])
		j++;

	for (k = 0; k < j; k++)
		dest[i++] = src[k];
	_putchar('\0');
}
