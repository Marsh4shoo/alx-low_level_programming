#include "main.h"

/**
 * get_endianness - checks if of the  machine is a little or big endian
 * Return: 0 for big, 1 for little
 * By Marshal
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

