#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string containing 0s and 1s representing the binary number
 * Return: converted unsigned int or 0 if there is no number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, sum;

	if (b == NULL)
		return (0);
	sum = 0;
	for (i = len = strlen(b) - 1, sum = 0; i >= 0; i--)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		sum += ((b[i] - '0') * _pow(2, len - i));
		if (i == 0)
			break;
	}
	return (sum);
}
