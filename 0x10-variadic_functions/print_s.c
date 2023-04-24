#include "variadic_functions.h"

/**
 * print_s - prints a string
 * @vprint: the string
 */
void print_s(va_list vprint)
{
	char *s;

	s = va_arg(vprint, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
