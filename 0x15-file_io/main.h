#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/*
 * Reads Text file and outputs its contents to the standard output.
 *
 * filename: The Name the file to read.
 * letters: The number letters to read and output.
 *
 * Returns the number of letters read and printed, or -1 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters);

/*
 * Creates a new file with the given filename and writes the provided text content to it.
 *
 * filename: The name of the file to create.
 * text_content: The content to write to the file.
 *
 * Returns 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content);

/*
 * Appends the provided text content to an existing file with the given filename.
 *
 * filename: The name of the file to which the text should be appended.
 * text_content: The content to append to the file.
 *
 * Returns 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content);

#endif

