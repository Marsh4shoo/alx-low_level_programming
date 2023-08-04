#include "main.h"

/**
 * flip_bits - Counts ALL the numb of Bits will Change
 * To get from The one numb To Another
 * @n: First numb
 * @m: Second numb
 * By Marshal Zvinoira
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
