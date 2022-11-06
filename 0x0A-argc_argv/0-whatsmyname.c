#include <stdio.h>

/**
 * main - prints my name
 *
 * @argc: counts the arguments
 * @argv: contains the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s;

	s = argv[argc - 1];

	printf("%s\n", s);

	return (0);
}
