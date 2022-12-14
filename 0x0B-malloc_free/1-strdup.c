#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in the memory.
 *
 * @str: pointer param
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *mem;
	int i, j;

	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[++i])
		;

	mem = malloc(sizeof(char) * (i + 1));

	if (mem == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		mem[j] = str[j];

	return (mem);
}
