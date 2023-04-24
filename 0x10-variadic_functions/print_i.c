#include "variadic_functions.h"

/**
 * print_i - prints an int
 * @vprint: the integer
 */
void print_i(va_list vprint)
{
	printf("%d", va_arg(vprint, int));
}
