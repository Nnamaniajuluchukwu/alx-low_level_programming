#include "main.h"

/**
 * _islower - check if a character is lower.
 *
 * @c: param
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
