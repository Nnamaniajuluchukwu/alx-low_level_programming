#include "main.h"

/**
 * _strncpy - copy string from one to another
 *
 * @dest: destination
 * @src: source
 * @n: int
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (src[j])
		++j;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	if (j < n)
		dest[i] = '\0';

	return (dest);
}
