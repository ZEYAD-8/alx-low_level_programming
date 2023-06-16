#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * *_calloc - creates an array of nmemb elements with size of "size" each
 * @nmemb: the number of elements
 * @size: size of each element
 * Return: a pointer to the memory allocated.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb * size == 0)
		return (NULL);

	p = calloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*(p + i) = 0;
	return (p);
}

