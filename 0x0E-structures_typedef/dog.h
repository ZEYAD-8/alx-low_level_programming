#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog details structure
 * @name: name
 * @age: age
 * @owner: owner
 *
 * description: none
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
