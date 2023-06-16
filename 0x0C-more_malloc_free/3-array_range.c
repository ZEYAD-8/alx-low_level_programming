#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * *array_range - creates an array with min - max
 * @min: min
 * @max: max
 * Return: a pointer to the memory allocated.
 */

int *array_range(int min, int max)
{
	int *p;
	int i, n;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0, n = min; n <= max; i++, n++)
	{
		p[i] = n;
	}
	return (p);
}

