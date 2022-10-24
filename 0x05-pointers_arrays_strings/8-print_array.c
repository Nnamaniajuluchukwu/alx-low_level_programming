#include "main.h"

/**
 * print_array - prints n array.
 *
 * @a: array
 * @n: number 
 */

int print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(a[i]);
	_putchar('\n');
}
