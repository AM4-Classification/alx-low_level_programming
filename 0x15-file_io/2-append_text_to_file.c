#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: If the function fails or if filename is NULL, it returns -1.
 * If the file does not exist or the user lacks write permissions, it returns -1.
 * Otherwise, return 1.
 */
int append_text_to_file(const char *filename, char *txt_cntent)
{
	int o, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	if (txt_cntent != NULL)
	{
		for (length = 0; txt_cntent[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(o, txt_cntent, length);

	if (o == -1 || bytes_written == -1)
		return (-1);

	close(o);

	return (1);
}
