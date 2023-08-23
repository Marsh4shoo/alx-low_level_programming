#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read A Text File Print STDOUT.
 * @filename: Text File That is being Read
 * @letters: NMBR OF Letters that will be Read
 * Return: w- actual nmbr Of bytes that will be read and printed
 *        0 when Function fails Or Filename Is NULL.
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
