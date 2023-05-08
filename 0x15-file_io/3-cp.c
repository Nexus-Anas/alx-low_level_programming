#include "main.h"

/**
 * main - Main func.
 * @argc: This var represents the arguments count.
 * @argv: This var represents the array of args.
 *
 * Return: returs 1 if success.
 */

int main(int argc, char **argv)
{
	char *memo;
	int f_from, f_to, w, r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	memo = CREATE_MEMO(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	r = read(f_from, memo, MEMO_SIZE);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (r == -1 || f_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(memo);
			exit(98);
		}
		w = write(f_to, memo, r);
		if (f_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(memo);
			exit(99);
		}

		r = read(f_from, memo, MEMO_SIZE);
		f_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(memo);
	F_CLOSE(f_from);
	F_CLOSE(f_to);
	return (0);
}

/**
 * F_CLOSE - This func closes the current file.
 * @current_file: the current file that must be
 * closed.
 */

void F_CLOSE(int current_file)
{
	int index;

	index = close(current_file);
	if (index == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", current_file);
		exit(100);
	}
}


/**
 * CREATE_MEMO - This func allocates 1024 bytes of
 * memory size for a buffer.
 * @ptr: This var represents the name of
 * the file which stores characters.
 *
 * Return: ptr to the new allocated buff.
 */

char *CREATE_MEMO(char *ptr)
{
	char *memory;

	memory = malloc(sizeof(char) * MEMO_SIZE);
	if (!memory)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ptr);
		exit(99);
	}
	return (memory);
}
