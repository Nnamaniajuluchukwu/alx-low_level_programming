#include "main.h"

/**
 * puts2 - prints next character
 *
 * @str: string
 */

void puts2(char *str)
{
	int i, j, len;

	i = 0;
	while (str[i])
		++i;

	len = i;

	for (j = 0; j < len; j += 2)
		_putchar(str[j]);

	_putchar('\n');
}
