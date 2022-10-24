#include "main.h"

/**
 * swap_int - this swaps integers
 *
 * @a: param
 * @b: param
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	b = p;
}
