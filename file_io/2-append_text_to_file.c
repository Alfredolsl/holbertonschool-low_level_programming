#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: null terminated string to be appended
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t append_function;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		append_function = write(fd, text_content, strlen(text_content));

		if (append_function == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
