#include "main.h"

/**
 * flip_bits - counts al  the numb of bits to change
 * to get from the one numb to another
 * @n: first numb
 * @m: second numb
 * By Marshal
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

