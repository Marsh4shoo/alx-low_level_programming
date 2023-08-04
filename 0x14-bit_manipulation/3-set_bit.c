#include "main.h"

/**
 * set_bit - Sets Of a Bit at Any given index to 1
 * @n: Pointer OF the numb To Change
 * @index: Index OF the Bit to Set to 1
 * By Marshal Zvinoira
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
