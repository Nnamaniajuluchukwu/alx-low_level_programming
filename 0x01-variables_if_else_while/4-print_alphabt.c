#include <stdio.h>

/**
 * main - print selected alphabet
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');
	return (0);
}
