#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message to standard error
 * @message: The error message to print
 *
 * Return: void
 */

void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
}

/**
 * main - Copies the content of one file to another file
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, exit with error codes on failure
 */

int main(int argc, char **argv)
{
	int pt_from, pt_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		exit(97);
	}
	pt_from = open(argv[1], O_RDONLY);
	if (pt_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	pt_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (pt_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(pt_from);
		exit(99);
	}
	while ((bytes_read = read(pt_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(pt_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(pt_from);
			close(pt_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(pt_from);
		close(pt_to);
		exit(98);
	}
	if (close(pt_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close pt %d\n", pt_from);
		exit(100);
	}
	if (close(pt_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close pt %d\n", pt_to);
		exit(100);
	}
	return (0);
}
