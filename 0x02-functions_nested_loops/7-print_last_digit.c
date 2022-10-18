#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @i: param
 *
 * Return: value
 */

int print_last_digit(int i)
{
	int m;

	m = -1 * (i % 10);
	_putchar(m + '0');
	return (i % 10);
}
