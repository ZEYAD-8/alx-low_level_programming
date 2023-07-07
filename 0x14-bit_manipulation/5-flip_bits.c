#include "main.h"
/**
 * flip_bits - calculates number of bits needed be flipped to get from n to m.
 * @n: the number
 * @m: the desired number
 * Return: number of bits required to be flipped to reach the desired number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit;
	int flip_counter;

	bit = 1UL << (sizeof(unsigned long int) * 8 - 1);
	for (flip_counter = 0; bit > 0; bit >>= 1)
		if (bit & m)
			if (bit & n)
				continue;
			else
				flip_counter++;
		else
			if (bit & n)
				flip_counter++;
			else
				continue;
	return (flip_counter);
}
