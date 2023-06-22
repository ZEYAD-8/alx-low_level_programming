/**
 * print_f - prints a float
 * @args: the float
 */
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}
