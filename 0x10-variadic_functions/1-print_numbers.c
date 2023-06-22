#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @n: number of parameters
 * @separator: separator
 * @...: variable arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	int is_sep;
	int num;
	unsigned int i;


	is_sep = 0;
	va_start(numbers, n);
	if (separator)
		is_sep = 1;

	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (is_sep && (i != n - 1))
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}

