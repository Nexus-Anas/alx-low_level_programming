#include "main.h"

/**
 * read_textfile - This func reads a file content
 * and prints it to the POSIX standart output.
 * @filename: This var represents the file content.
 * @letters: This var represents the num of letters
 * of the file.
 *
 * Return: returns 0 if the file throw an error or
 * cannot be opened, and fail if the filename is NULL,
 * returns the writed bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w, r, file_identifier;
	char *memo;

	if (!filename)
		return (0);

	file_identifier = open(filename, O_RDONLY);
	if (file_identifier == -1)
		return (0);

	memo = malloc(sizeof(char) * letters);
	if (!memo)
	{
		close(file_identifier);
		return (0);
	}

	r = read(file_identifier, memo, letters);
	w = write(STDOUT_FILENO, memo, r);

	if (r == -1 || w == -1 || r != w)
	{
		free(memo);
		close(file_identifier);
		return (0);
	}

	free(memo);
	close(file_identifier);
	return (w);
}
