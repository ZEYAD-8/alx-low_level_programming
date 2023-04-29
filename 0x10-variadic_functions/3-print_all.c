#include "variadic_functions.h"
#include "print_c.c"
#include "print_i.c"
#include "print_f.c"
#include "print_s.c"

/**
 * print_all - print everything
 * @format: type to print
 * Return: none
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "";
	va_list vprint;

	types token[] = { {'c', print_c},
			      {'i', print_i},
			      {'f', print_f},
			      {'s', print_s},
			      {'\0', NULL} };

	va_start(vprint, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (token[j].c != '\0')
		{
			if (token[j].c == format[i])
			{
				printf("%s", separator);
				token[j].f(vprint);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(vprint);

	printf("\n");
}
