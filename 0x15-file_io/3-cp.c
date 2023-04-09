#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: returns 1 if no error
 */

int main(int argc, char *argv[])
{
	int descriptor;
	int result;
	int out;
	char memo[MEMO_SIZE];
	ssize_t r, w;

	descriptor = open(argv[1], O_RDONLY);
	out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		r = read(descriptor, memo, MEMO_SIZE);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(descriptor);
			close(out);
			exit(98);
		}

		w = write(descriptor, memo, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(descriptor);
			close(out);
			exit(99);
		}
	} while (r > 0);

	result = close(descriptor);
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descriptor);
		exit(100);
	}

	result = close(out);
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", out);
		exit(100);
	}
	return (0);
}
