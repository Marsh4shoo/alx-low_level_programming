#include "main.h"

/**
 * _strpbrk - function name
 * @s : pointer check the value inside
 * @accept : value to check
 * Return: s and 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
