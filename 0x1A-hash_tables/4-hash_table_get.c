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
unsigned long int index;

index = key_index((const unsigned char *)key, ht->size);

	if (key == NULL || ht == NULL)
		return (NULL);

	while (ht->array[index])
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			return (ht->array[index]->value);
		}
		else
			ht->array[index] = ht->array[index]->next;
	}

return (NULL);
}
