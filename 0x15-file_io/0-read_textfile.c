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
	FILE *file = fopen(filename, "r");
	char *memo = (char *) malloc(letters * sizeof(char));
	size_t read = fread(memo, sizeof(char), letters, file);
	size_t write = fwrite(memo, sizeof(char), read, stdout);

	if (filename == NULL)
		return (0);
	if (file == NULL)
		return (0);
	if (memo == NULL)
	{
		fclose(file);
		return (0);
	}
	if (ferror(file) && read != letters)
	{
		fclose(file);
		free(memo);
		return (0);
	}
	if (read != write)
	{
		fclose(file);
		free(memo);
		return (0);
	}
	fclose(file);
	free(memo);
	return (write);
}
