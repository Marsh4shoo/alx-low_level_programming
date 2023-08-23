#include "main.h"

/**
 * _strchr - function Naame
 * @s : pointer check the valueinside
 * @c : value to check
 * Return: string or null.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
