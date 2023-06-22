/**
 * print_c - prints a char
 * @args: the char
 */
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}
