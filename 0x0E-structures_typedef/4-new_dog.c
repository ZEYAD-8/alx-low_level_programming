#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

if (name == NULL || owner == NULL)
return (NULL);
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
