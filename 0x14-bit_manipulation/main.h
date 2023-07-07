#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * _pow - simple function that takes two parameters
 * @base: the base
 * @power: the power
 * Return: the base muliplied by itself power number of times
*/
int _pow(int base, unsigned int power)
{
	if (power <= 0)
		return (1);

	int res, i;

	res = 0;
	res = base * _pow(base, power - 1);
	return (res);
}

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

unsigned int binary_to_uint(const char *b);

#endif
