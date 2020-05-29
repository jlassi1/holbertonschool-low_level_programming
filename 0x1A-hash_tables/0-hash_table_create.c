#include "hash_tables.h"
/**
 *hash_table_create-function that creates a hash table.
 *
 *@size: is the size of the array
 *
 *Return: a pointer to the newly created hash table or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{

hash_table_t *tab;
unsigned long int x;

	tab = malloc(sizeof(hash_table_t));
		if (tab == NULL)
			return (NULL);

	tab->array = malloc(sizeof(hash_node_t *) * size);
		if (tab->array == NULL)
		{
			free(tab);
			return (NULL);
		}

	tab->size = size;
	for (x = 0; x < size; x++)
		tab->array[x] = NULL;

return (tab);
}
