#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int is_sep;
	char *name;
	unsigned int i;


	is_sep = 0;
	va_start(args, n);
	if (separator)
		is_sep = 1;

	for (i = 0; i < n; i++)
	{
		name = va_arg(args, char *);
		if (name != NULL)
			printf("%s", name);
		else
			printf("(nil)");
		if (is_sep && (i != n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}

