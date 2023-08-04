#include "main.h"

/**
 * get_bit - Returns Single value Of a Bit index in a Decimal numb
 * @n: numbr To Search
 * @index: Index the BIT
 * By Marshal Zvinoira
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
