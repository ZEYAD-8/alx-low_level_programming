#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - entry point
 * @s1: string
 * @s2: string
 * Return: string
*/
char *str_concat(char *s1, char *s2)
{
	int i, s1_len, s2_len, is_s2_null, is_s1_null, s1_flag;
	char *new_string;

	s1_len = s2_ len = is_s1_null = is_s2_null = 0;
	if (s1 == NULL)
		is_s1_null = 1;
	else
		s1_len = strlen(s1);

	if (s2 == NULL)
		is_s2_null = 1;
	else
		s2_len = strlen(s2);

	new_string = malloc(sizeof(char) * (s1_len + s2_len));
	if (new_string == NULL)
		return (NULL);

	for (i = 0, len = s1_len, s1_flag = 1; i < len; i++)
	{
		if (len == 0)
		{
			s1_flag = 0;
			len = s2_len;
		}

		if (s1_flag)
			new_string[i] = s1[i];
		else
			new_string[i] = s1[i + s1_len];
	}
	new_string[s1_len + s2_len + 1] = '\0';
	return (new_string);
}
