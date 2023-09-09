#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: the hash table
 * @key: Key
 * @value: the node's vlaue
 *
 * Return: 1 if success, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index = 0;
	char *cpy_v = NULL;
	char *cpy_k = NULL;

	if (ht == NULL || key == NULL)
		return (0);

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (0);
	cpy_k = (char *)malloc(strlen(key) + 1);
	strcpy(cpy_k, key);
	if (value != NULL)
	{
		cpy_v = (char *)malloc(strlen(value) + 1);
		strcpy(cpy_v, value);
	}
	new_node->key = cpy_k;
	new_node->value = cpy_v;
	index = key_index((unsigned char *)cpy_k, ht->size);

	if (ht->array == NULL)
		return (0);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
