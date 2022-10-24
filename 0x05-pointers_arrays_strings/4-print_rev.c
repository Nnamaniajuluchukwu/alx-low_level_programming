#include "main.h"

/**
 * print_rev - reverse the string
 *
 * @s: strings
 */

void print_rev(char *s)
{
	int i, len;

	i = 0;
	while (s[i])
		i++;

	len = (i - 1);

	for (; len >= 0; len--)
		_putchar(s[len]);

	_putchar('\n');
}
