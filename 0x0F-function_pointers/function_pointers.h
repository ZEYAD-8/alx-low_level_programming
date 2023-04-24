#ifndef FUNCTION_POINTERS.H
#define FUNCTION_POINTERS.H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#define NULL ((void*)0)

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));



/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno us set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#endif