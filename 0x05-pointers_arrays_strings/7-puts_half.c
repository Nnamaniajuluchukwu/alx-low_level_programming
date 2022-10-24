#include "main.h"

/**
 * puts_half - prints half of string
 *
 * @str: string
 */

void puts_string(char *str)
{
	int i, len;

	i = 0;
	while (str[i])
		i++;

	len = i - 1;

	for (j = len / 2; j < len; j++)
		_putchar(str[i]);

	_putchar('\n');
}
