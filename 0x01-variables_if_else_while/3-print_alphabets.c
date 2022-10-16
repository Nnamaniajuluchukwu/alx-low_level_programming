#include <stdio.h>

/**
 * main - prints all the alphabets.
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i < 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
