#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- reads a text file and prints it to STDOUT.
 * @filename: name of text file
 * @num_letters: num of letters to be read
 * Return: bytes_written -  actual number of bytes read and printed
 * else return 0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t num_letters)
{
	char *buffer_pt;
	ssize_t file_descriptor;
	ssize_t bytes_written;
	ssize_t bytes_read;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer_pt = malloc(sizeof(char) * num_letters);
	bytes_read = read(file_descriptor, buffer_pt, num_letters);
	bytes_written = write(STDOUT_FILENO, buffer_pt, bytes_read);

	free(buffer_pt);
	close(file_descriptor);
	return (bytes_written);
}

