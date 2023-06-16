#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * **string_nconcat - concatenates two strings together
 * @s1: the first string
 * @s2: the second string
 * @n: number of charachters
 * Return: a pointer to the memory allocated, exits with status 98 otherwise.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, lens1;

	if (s2 == NULL)
		n = 0;
	else if (n > strlen(s2))
		n = strlen(s2);

	if (s1 == NULL)
		lens1 = 0;
	else
		lens1 = strlen(s1);

	p = malloc(lens1 + n + 1);
	for (i = 0; i < (lens1 + n + 1); ++i)
	{
		if (i < lens1)
		{
			p[i] = s1[i];
			continue;
		}
		if (s2 != NULL)
			p[i] = s2[i - lens1];
	}
	p[i] = '\0';
	return (p);
}

