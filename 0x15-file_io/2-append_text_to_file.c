#include "main.h"

/**
 * append_text_to_file - This func appends
 * text to the end of a file.
 * @filename: This var represents the file content.
 * @text_content: This var represents the content
 * to append.
 *
 * Return: returns 1 if success, or -1 if failed.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_identifier, result, index;

	if (!filename)
		return (-1);

	file_identifier = open(filename, O_WRONLY | O_APPEND);
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
