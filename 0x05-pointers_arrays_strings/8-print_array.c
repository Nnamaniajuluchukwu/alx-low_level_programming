#include "main.h"

/**
 * print_array - prints n airray.
 *
 * @a: array
 * @n: number 
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(a[i] + '0');
	_putchar('\n');
}
