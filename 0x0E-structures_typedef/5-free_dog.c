#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees dogs
 * @d: Pointer to dog_t struct
 *
 * Description: Frees memory used by dog_t struct
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;
free_dog(d->name);
free_dog(d->owner);
free(d);
}

