#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - This func reads a text file and prints
 * it to the POSIX standart output.
 * @filename: the text file
 * @letters: number of letters of the file
 *
 * Return: returns 0 if the file cannot be opened,
 * if the filename is NULL, if write fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, descriptor;
	char *memo;

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
		return (0);
	memo = malloc(sizeof(char) * letters);
	r = read(descriptor, memo, letters);
	w = write(STDOUT_FILENO, memo, r);
	free(memo);
	close(descriptor);
	return (w);
}
