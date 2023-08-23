#include "main.h"

/**
 * _strncat - combines the two strings
 * @dest: string destination
 * @src: string source
 * @n: number the bytes from src
 *
 * Return: ppointer the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
