#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a string to be written to the file.
 *
 * Return: If the function fails, it returns -1.
 * Otherwise, it returns 1.
 */
int create_file(const char *filename, char *txt_cntent)
{
	int file_descriptor, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	if (txt_cntent != NULL)
	{
		for (length = 0; txt_cntent[length];)
			length++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(file_descriptor, txt_cntent, length);

	if (file_descriptor == -1 || length == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
