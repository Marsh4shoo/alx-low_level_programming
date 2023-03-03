#include "main.h"
/**
 * jack_bauer - prints the minutes and hours
 *
 *  Return: is a zero
 */

void jack_bauer(void)
{
	int h;
        int m;

        for (h = 0 ; h < 24 ; h++)
	{


		for (m = 0 ; m < 60 ; m++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
			
	}
