#include "variadic_functions.h"

/**
 * print_c - prints a char
 * @vprint: the char
 */
void print_c(va_list vprint)
{
	printf("%c", va_arg(vprint, int));
}
