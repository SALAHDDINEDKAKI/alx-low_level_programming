#include <unistd.h>
#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - Appends text content to an existing file
 * @filename: Name of the file to append text to
 * @text_content: Text content to append to the file (NULL if empty)
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int pt, bytes_written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
