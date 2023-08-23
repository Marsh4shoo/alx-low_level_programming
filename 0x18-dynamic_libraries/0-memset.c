#include "main.h"

/**
 * _memset - Function
 * @s : Address The memory Chosen to be filled
 * @b : Character Will fill Memory
 * @n : Number times That will fill the memory
 * Return: memory.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
