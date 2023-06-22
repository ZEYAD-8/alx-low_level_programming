#include "variadic_functions.h"
#include "print_c.c"
#include "print_i.c"
#include "print_f.c"
#include "print_s.c"
#include <string.h>
/**
 * print_all - print everything
 * @format: type to print
 * Return: none
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;
	char *separator = "";
	types options[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s}
	};


	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == options[j].c)
			{
				printf("%s", separator);
				options[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

