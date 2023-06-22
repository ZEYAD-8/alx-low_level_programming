#include "variadic_functions.h"

/**
 * print_s - prints a string
 * @args: the string
 */
void print_s(va_list args)
{
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

