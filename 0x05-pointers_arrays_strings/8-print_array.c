#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string
 */

void rev_string(char *s)
{
	int i, j, len;
	char temp;

	i = 0;

	while (s[i])
		i++;

	len = i;

	for (j = 0; j < (len / 2); j++)
	{
		temp = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = temp;
	}
}

/**
 * _itoa - convert integer to string.
 *
 * @n: integer
 * @s: array to save
 */

void _itoa(int n, char *s)
{
	int i, sign;

	sign = n;

	if (sign < 0)
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
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
