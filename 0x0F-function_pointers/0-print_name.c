#include "function_pointers.h"

/**
 * print_name - print name using pointer to function.
 * 
 * @name: the name as a string.
 * @f: pointer to a function.
 * 
 * Return: nothing. 
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
