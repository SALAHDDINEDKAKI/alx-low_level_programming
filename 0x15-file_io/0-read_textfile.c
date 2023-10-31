#include <unistd.h>
#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: Number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int pt;
	ssize_t bytes_read, bytes_written;
	char *katze;

	if (filename == NULL)
		return (0);

	pt = open(filename, O_RDONLY);
	if (pt == -1)
		return (0);

	katze = malloc(sizeof(char) * letters);
	if (katze == NULL)
	{
		close(pt);
		return (0);
	}

	bytes_read = read(pt, katze, letters);
	if (bytes_read == -1)
	{
		free(katze);
		close(pt);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, katze, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(katze);
		close(pt);
		return (0);
	}

	free(katze);
	close(pt);
	return (bytes_written);
}
