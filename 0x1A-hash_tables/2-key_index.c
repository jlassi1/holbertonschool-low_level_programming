#include "hash_tables.h"
/**
 *
 *
 *
 *
 *
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_key = hash_djb2(key);

unsigned long int hash_index = hash_key % size;

return (hash_index);
}
