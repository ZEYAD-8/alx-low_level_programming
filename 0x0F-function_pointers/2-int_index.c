#include "function_pointers.h"

/**
 * int_index - return index if comparison succes
 *
 * @array: given array
 * @size: size of the array
 * @cmp: pointer to the function used to compare
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
		if (cmp(array[index]))
			return (index);

	return (-1);
}

