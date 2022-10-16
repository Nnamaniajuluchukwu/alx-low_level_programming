#include <stdio.h>

/**
 * main - print combo
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 48, j = 44; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
			putchar(j);
			putchar(32);
	}
	putchar('\n');
	return (0);
}
