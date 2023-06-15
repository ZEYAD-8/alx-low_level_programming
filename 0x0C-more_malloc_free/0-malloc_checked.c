#include <stdlib.h>
#include <stddef.h>
/**
 * *malloc_checked - allocates memory
 * @b: the input
 *
 * Return: a pointer to the memory allocated, exits with status 98 otherwise.
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}

