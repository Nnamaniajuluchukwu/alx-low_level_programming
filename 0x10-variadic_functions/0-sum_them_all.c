#include "variadic_functions.h"

/**
 * sum_them_all - This sums all the arguments and return the answer.
 *
 * @n: number of args
 *
 * Return: the answer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);

	va_end(args);
	return (sum);
}
