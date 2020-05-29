#include "hash_tables.h"
/**
 *
 *
 *
 *
 *
 *
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i = 0;
hash_node_t *tmp;
int comma = 0;

if (ht == NULL)
return;

printf("{");
for (i = 0; i <= ht->size; i++)
{
    tmp = ht->array[i];
    while (tmp != NULL)
    {
        if (comma == 1)
            printf(", ");
        printf("'%s' : '%s'", tmp->key, tmp->value);
        comma = 1;
        tmp = tmp->next;
    }
    

}
printf("}\n");

}
