#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads file print to STDOUT.
 * @filename: Text File Being read
 * @letters: NUMBER Of Letters that will be read
 * Return: w- actual numbr Bytes Read and Printed
 *        0 when function Fails Or Filename Is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

