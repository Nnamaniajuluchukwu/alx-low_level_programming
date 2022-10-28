#include "main.h"

/**
 * _strcat - concat strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: dest new
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		++i;

	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	dest[i] = '\0';

	return (dest);
}
