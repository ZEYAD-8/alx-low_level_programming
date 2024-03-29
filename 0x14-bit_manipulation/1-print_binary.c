#include "main.h"

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
	current_bit = 1UL << (sizeof(unsigned long int) * 8 - 1);
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
