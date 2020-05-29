#include "hash_tables.h"
/**
 *hash_table_delete-function that deletes a hash table.
 *
 *@ht: is the hash table
 *
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *tmp;
unsigned long int i = 0;
	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;

			free(node->key);
			free(node->value);
			free(node);

			node = tmp;
		}


	}

free(ht->array);
free(ht);

}

