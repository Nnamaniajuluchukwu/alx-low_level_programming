#include "main.h"

/**
 * puts_half - prints half of string
 *
 * @str: string
 */

void puts_half(char *str)
{
	int i, j, len;

	i = 0;
	while (str[i])
		++i;

	len = i;

	for (j = len / 2; j < len; j++)
		_putchar(str[j]);

	_putchar('\n');
}
