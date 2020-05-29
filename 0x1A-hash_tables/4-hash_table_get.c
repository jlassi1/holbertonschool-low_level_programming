#include "hash_tables.h"
/**
 *hash_table_get-function that retrieves a value associated with a key.
 *
 *@ht: is the hash table you want to look into
 *@key: is the key you are looking for
 *
 *Return: the value of our key OR NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = key_index((const unsigned char *)key, ht->size);
hash_node_t *node = ht->array[index];

		if (ht == NULL || key == NULL)
			return (NULL);

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		else
			node = node->next;
	}

return (NULL);
}
