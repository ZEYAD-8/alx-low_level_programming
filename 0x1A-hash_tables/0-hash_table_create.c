#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: Size of hash Table array
 *
 * Return: pointer to the hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	table->array = malloc(sizeof(hash_node_t) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		table->array[i] = NULL;
	}

	table->size = size;
	return (table);
}
