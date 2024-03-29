#include "main.h"

/**
 * clear_bit - sets the values of any given bit to 0
 * @n: pointer to the numb to change
 * @index: index of the bit to clear
 * By Marshal
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
