#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * main - Prints _putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Return: Always 0 (Success)
 */
int _putchar(char c)
int main(void)
{
	return (write(1, &c, 1));
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, len;

	len = sizeof(str) / sizeof(int);
	for (count = 0; count < len; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
