#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of the file
 * @letters: number of letters to read and print
 *
 * Return: The actual number bytes the function could read & print
 * if file cannot be opened or read or filename is NULL, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int = fd;
	char *buffer;
	ssize_t read_bytes, write_bytes;

	if (filename == NULL)
		return (NULL);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	/* note: STDOUT_FILENO is the standard output in <unistd.h> */
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	close(fd);
	free(buffer);

	if (write bytes != read_bytes)
		return (0);

	return (read_bytes);
}
