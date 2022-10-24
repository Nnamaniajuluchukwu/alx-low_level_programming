#include "main.h"

/**
 * swap_int - this swaps integers
 *
 * @a: param
 * @b: param
 */

void swap_int(int *a, int *b)
{
	int *p, *q;

	p = a;
	q = b;

	a = q;
	b = p;
}
