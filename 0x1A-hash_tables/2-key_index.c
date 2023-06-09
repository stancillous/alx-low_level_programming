#include "hash_tables.h"

/**
 * hash_table_set - adds el to hash table
 * @ht: hash table to be updated
 * @key: key
 * @value: value 
 * Return: 1(success) or 0(failure)
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
