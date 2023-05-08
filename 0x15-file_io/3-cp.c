#include "main.h"

/**
 * main - Main func.
 * @argc: This var represents the arguments count.
 * @argv: This var represents the array of args.
 *
 * Return: returns 1 if success.
 */

int main(int argc, char **argv)
{
	char *f_from, *f_to, memo[MEMO_SIZE];
	int file_identifier_from, file_identifier_to;
	ssize_t w, r;

	if (argc != 3)
		print_ERR("Usage: %s file_from file_to\n", argv[0], 97);
	f_from = argv[1];
	f_to = argv[2];

	file_identifier_from = open(f_from, O_RDONLY);
	if (file_identifier_from == -1)
		print_ERR("Error: Can't read from file %s\n", f_from, 98);

	file_identifier_to = open(f_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_identifier_to == -1)
		print_ERR("Error: Can't write to %s\n", f_to, 99);

	while ((r = read(file_identifier_from, memo, MEMO_SIZE)) > 0)
	{
		w = write(file_identifier_to, memo, r);
		if (w == -1)
			print_ERR("Error: Can't write to %s\n", f_to, 99);

		if (w != r)
			print_ERR("Error: Incomplete write to %s\n", f_to, 99);
	}

	if (r == -1)
		print_ERR("Error: Can't read from file %s\n", f_from, 98);

	if (close(file_identifier_from) == -1)
		print_ERR("Error: Can't close fd %d\n", "", 100);

	if (close(file_identifier_to) == -1)
		print_ERR("Error: Can't close fd %d\n", "", 100);

	return (0);
}


/**
 * print_ERR - This func represents the error message.
 * @errorMSG: This var represents the error message.
 * @f: This var represents the file.
 * @value: This var represents the exit value.
 *
 * Return: void.
 */

void print_ERR(char *errorMSG, char *f, int value)
{
	dprintf(STDERR_FILENO, errorMSG, f);
	exit(value);
}

