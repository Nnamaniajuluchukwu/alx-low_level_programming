#include "search_algos.h"

/**
 * linear_search - find a value using linear method.
 *
 * @array: a pointer to the array.
 * @size: size of the array.
 * @value: value to be searched for.
 *
 * Return: return 0 if found and -1 not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
