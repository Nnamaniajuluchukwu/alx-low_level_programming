#include "main.h"

/**
 * rev_string - reverse strings.
 *
 * @s: param
 */

void rev_string(char *s)
{
	int i, j, len;
	char temp;
	i = 0;

	while (s[i])
		i++;

	len = i - 1;

	for (j = 0; j > (len / 2); j++)
	{
		temp = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = temp;
	}
}
