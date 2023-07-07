#include "main.h"
/**
 * get_bit - returns the bit at a certain index
 * @n: the number
 * @index: the index
 * Return: the bit required
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit = 1UL << index;
	if (n & bit)
		return (1);
	else
		return (0);
}
