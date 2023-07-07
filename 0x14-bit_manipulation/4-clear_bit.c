#include "main.h"
/**
 * clear_bit - sets the bit at a certain index to 1
 * @n: the number
 * @index: the index to change
 * Return: 1 in the case of success, -1 if not
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit = 1UL << index;
	bit = ~bit;
	*n &= bit;
	return (1);
}
