#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: 0
 */

int main(void)
{
	char print[] = "_putchar";
	int i;

	for (i = 0; print[i]; i++)
		_putchar(print[i]);
	_putchar('\n');
	return (0);
}
