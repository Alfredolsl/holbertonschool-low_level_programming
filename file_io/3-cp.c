#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(int error_code, const char *message, ...);

int open_file(const char *filename, int flags, mode_t mode);

void close_file(const char *filename, int fd);

/**
 * main - main function for copying one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, otherwise exit with error code
 */

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}


	fd_from = open_file(file_from, O_RDONLY, 0);
	fd_to = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close_file(file_from, fd_from);
			close_file(file_to, fd_to);
			print_error_and_exit(99, "Error: Can't write to %s\n", file_to);
		}
	}

	if (bytes_read == -1)
	{
		close_file(file_from, fd_from);
		close_file(file_to, fd_to);
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	close_file(file_from, fd_from);
	close_file(file_to, fd_to);
	return (0);
}

/**
 * print_error_and_exit - handles error and aborts function
 * @error_code: error code encountered
 * @message: error message to write on screen
 */

void print_error_and_exit(int error_code, const char *message, ...)
{
	va_list args;

	va_start(args, message);
	dprintf(STDERR_FILENO, message, va_arg(args, char *));
	va_end(args);

	exit(error_code);
}

/**
 * open_file - opens a file
 * @filename: name of file to open
 * @flags: read, write, or do both to the file
 * @mode: file permission bits
 *
 * Return: nonnegative integer, if an error is encountered, returns -1
 */

int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (strcmp(filename, "") == 0)
		print_error_and_exit(99, "Error: Can't write to %s\n", filename);

	if (fd == -1 && access(filename, R_OK) == 0)
		print_error_and_exit(99, "Error: Can't write to %s\n", filename);
	else if (fd == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", filename);

	return (fd);
}

/**
 * close_file - closes a file
 * @filename: name of file to close
 * @fd: returned number of open function
 */

void close_file(const char *filename, int fd)
{
	if (close(fd) == -1)
		print_error_and_exit(100, "Error: Can't close fd for file %s\n", filename);
}
