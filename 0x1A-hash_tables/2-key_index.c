#include "hash_tables.h"

/**
 * key_index - Get Index Which a key/value
 *      pair should be stored in Array Of a hash table.
 * @key: Key to get the index of.
 * @size: The Size of Array of the hash table.
 *
 * Return: Index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
