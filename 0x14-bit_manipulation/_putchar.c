#include "main.h"
#include <unistd.h>
/**
 * _putchar - Write all the Characters C to stdout
 * @c: The characters Print
 * By Marshal Zvinoira
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
