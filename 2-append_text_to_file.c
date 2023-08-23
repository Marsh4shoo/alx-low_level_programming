#include "main.h"

/**
 * append_text_to_file - Appends Text At the END of a file.
 * @filename: Pointer to The name Of A file.
 * @text_content: The String Will Add to the END of A file.
 *
 * Return: If A Function Fails Or filename Is NULL - -1.
 *         If A file does not exist the User lacks Write Permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(c2-append_text_to_file.const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

