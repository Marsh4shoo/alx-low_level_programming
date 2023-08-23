#include "main.h"

/**
 * _strcat - Include two strings
 * @dest: String Will be appended to
 * @src: string Appended Dest
 *
 * Return: Pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
