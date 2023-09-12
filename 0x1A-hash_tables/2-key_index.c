#include "hash_tables.h"

/**
 * key_index - Get Index Which Is a key/value
 *      pair should Be stored In Array Of a hash table.
 * @key: Key Will get the index of.
 * @size: The Size Of Array Of Hash table.
 *
 * Return: Index of the Key.
 * Description: Uses The djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
