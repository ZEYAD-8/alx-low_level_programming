#include <stdio.h>
#include <stdlib.h>


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char * array;
	
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
