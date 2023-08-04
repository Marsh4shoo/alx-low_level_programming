#include "main.h"

/**
 * get_endianness - Checks When the machine Is a little or Big Endian
 * Return: 0 for BIG, 1 For Little
 * By Marshal Zvinoira
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
