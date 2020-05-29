#include "hash_tables.h"
/**
 *key_index-function that gives you the index of a key
 *
 *@key: is the key
 *@size: is the size of the array of the hash table
 *
 *Return: index of the key in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_key = hash_djb2(key);

unsigned long int hash_index = hash_key % size;

return (hash_index);
}
