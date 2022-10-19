#include "main.h"

/**
 * lower - print if n is lower than 98
 *
 * @p: param
 */

void lower(int p)
{
	for (; p <= 98; p++)
	{
		if (p > 9)
		{
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			if (p != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(p + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

/**
 * upper - print if n > 98
 *
 * @p: param
 */

void upper(int p)
{
	for (; n >= 98; p--)
	{
		if (n > 99)
		{
			_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}

/**
 * print_to_98 - prints the value
 *
 * @n: param
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		lower(n);
	else
	{
		upper(p);
	}
	_putchar('\n');
}
