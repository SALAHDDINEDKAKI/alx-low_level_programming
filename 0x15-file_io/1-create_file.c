#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: Name of the file to create
 * @text_content: Text content to write to the file (NULL if empty)
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int pt, bytes_written = 0;

	if (filename == NULL)
		return (-1);

	pt = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (pt == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[bytes_written] != '\0')
			bytes_written++;

		bytes_written = write(pt, text_content, bytes_written);
		if (bytes_written == -1)
		{
			close(pt);
			return (-1);
		}
	}
	close(pt);
	return (1);
}
