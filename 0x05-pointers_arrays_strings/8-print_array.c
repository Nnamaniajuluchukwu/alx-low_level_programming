#include "main.h"

/**
 * _itoa - convert integer to string.
 *
 * @n: integer
 * @s: array to save
 */

void rev_string(char *s);

void _itoa(int n, char *s)
{
	int i, sign;

	if ((sign = n) < 0)
		n = -n;

	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);

	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	rev_string(s);
}

/**
 * print_array - prints n airray.
 *
 * @a: array
 * @n: number 
 */

void print_array(int *a, int n)
{
	int i, j;
	char s[10];

	for (i = 0; i < n; i++)
	{
		_itoa(a[i], s);
		for (j = 0; s[j]; j++)
			_putchar(s[j]);
		_putchar('\n');
	}
	_putchar('\n');
}
