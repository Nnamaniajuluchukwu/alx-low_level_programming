#include <stdio.h>

/**
 * main - prints number using putchar
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');
}
