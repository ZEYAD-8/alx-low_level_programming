/**
 * print_i - prints an int
 * @args: the integer
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}
