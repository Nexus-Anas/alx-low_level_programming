#include "main.h"

/**
 * create_file - This func creates a file.
 * @filename: This var represents the file content.
 * @text_content: This var represents the content
 * to write.
 *
 * Return: returns 1 if succeed, or 0 if fail.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t file_identifier, result, index;

	if (!filename)
		return (-1);

	file_identifier = open(filename, O_RDWR |
			O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_identifier == -1)
		return (-1);

	if (text_content)
	{
		index = 0;
		while (text_content[index] != '\0')
			index++;
		result = write(file_identifier, text_content, index);
		if (result == -1)
		{
			close(file_identifier);
			return (-1);
		}
	}
	close(file_identifier);
	return (1);
}
