#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to a struct dog
 *
 * Return: void
 *
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
char *name, *owner;
float age;

name = (d->name != NULL) ? d->name : "(nil)";
age  = d->age;
owner = (d->owner != NULL) ? d->owner : "(nil)";
printf("Name: %s\n", name);
printf("Age: %f\n", age);
printf("Owner: %s\n", owner);
}
}

