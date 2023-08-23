#include "main.h"

/**
 * _memcpy - function copy string in to the memory
 * @dest : where to copy it to
 * @src : where to copy it from
 * @n : number times that will fill the memory
 * Return: memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
