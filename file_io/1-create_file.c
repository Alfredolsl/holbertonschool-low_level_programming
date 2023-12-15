#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: text written inside the file to be created
 *
 * Return: 1 on success, -1 on failure if file can't be created or written
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t write_text;

	if (filename == NULL)
		return (-1);
	/* 0600 read and write privileges for owner*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_text = write(fd, text_content, strlen(text_content));

		if (write_text == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
