#include <stdio.h>
#include <stdlib.h>

/**
 * is_num - check if the number is a string digit.
 *
 * @s: the pointer string.
 *
 * Return: 0 if not and 1 if it is.
 */

int is_num(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - add arguments
 
 * @argc: count arguments.
 * @argv: variable arguments.
 *
 * Return: 0 if correct or 1 if it isn't.
 */

int main(int argc, char *argv[])
{
	int result = 0, i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	/* ./app 1 2 3 5 6 */
	for (i = 1; i < argc; i++)
	{
		if (is_num(argv[i]))
		{
			result += atoi(argv[i]);
		}
		else
		{
			puts("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
