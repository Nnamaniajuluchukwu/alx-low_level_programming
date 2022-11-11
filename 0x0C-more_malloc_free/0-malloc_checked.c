#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory.
 *
 * @b: amount of bytes.
 *
 * Return: points to the allocates memory. If malloc fails return 98.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
