#include "main.h"

/**
 * print_times_table - print times table
 *
 * @n: param
 */

void print_times_table(int n)
{
	int i, j, k;

	if (!(n < 0 || n > 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (k > 9)
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
					if (j != 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					if (j != 0)
						_putchar(' ');
					_putchar(k + '0');
					if (j != 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
