#include "main.h"

/**
 * clear_bit - Sets all  values of ANY given bit to 0
 * @n: Pointe The numbr To Change
 * @index: Index The bit To Clear
 * By Marshal Zvinoira
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
