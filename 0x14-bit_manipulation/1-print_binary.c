#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno us set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_binary - converts an unsigned long int to binary representation
 * @n: the number
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long int current_bit;
	int leading;

	if (n == 0)
	{
		printf("0");
		return;
	}
	current_bit = (unsigned long int)1 << (63);
	leading = 1;
	while (current_bit > 0)
	{
		if ((n & current_bit) || !leading)
		{
			if (n & current_bit)
				_putchar('1');
			else
				_putchar('0');
			leading = 0;
		}
		current_bit >>= 1;
	}
}
