#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * *_realloc - reallocate the memory to a new size
 * @*ptr: the old piece of memory
 * @old_size: the old size
 * @new_size: the new size
 * Return: a pointer to the memory reallocated.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size < old_size)
		strncpy(p, ptr, new_size);
	else
		strcpy(p, ptr);
	free(ptr);
	return (p);
}

