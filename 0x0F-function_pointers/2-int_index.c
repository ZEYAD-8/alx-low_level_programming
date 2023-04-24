#include "function_pointers.h"

/**
 * int_index - return index if comparison succes
 * 
 * @array: given array
 * @size: size of the array 
 * @cmp: pointer to the function used to compare
 *  
 * Return: int 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
int i;
for (i = 0; i <= size; i++)
{
if (cmp (array[i]) != 0)
return (i);
}
return (-1);
}
