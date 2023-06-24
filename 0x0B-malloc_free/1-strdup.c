#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - entry point
 * @str: string
 * Return: pointer
*/
char *_strdup(char *str)
{
	char *new;

	if (str == NULL)
		return (NULL);
	new = malloc(strlen(str) + 1);
	if (new == NULL)
		return (NULL);
	strcpy(new, str);
	return (new);
}
