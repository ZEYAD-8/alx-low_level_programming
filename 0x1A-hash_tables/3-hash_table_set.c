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
	unsigned long int index;
	hash_node_t *new_node;
	char *dup_value = NULL;
	char *dup_key = NULL;

	if (key == NULL)
		return (0);
	dup_key = malloc(strlen(key) + 1);
	dup_key = strcpy(dup_key, key);
	if (dup_key == NULL)
		return (0);

	if (value != NULL)
	{
		dup_value = strdup(value);
		if (dup_value == NULL)
		{
			free (dup_key);
			return (0);
		}
	}
	index = key_index((unsigned char *)dup_key, ht->size);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = dup_key;
	new_node->value = dup_value;
	new_node->next = NULL;

	if (ht->array == NULL)
		return (0);

	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new_node;
	}
	else
	{
		new_node->next = (ht->array)[index];
		(ht->array)[index] = new_node;
	}

	return (1);
}
