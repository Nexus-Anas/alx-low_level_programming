#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - This func appends text
 * to the end of the file
 * @filename: name of the file
 * @text_content: content to append
 *
 * Return: returns 1, else, -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int descriptor;
	int result;
	int index = 0;

	descriptor = open(filename, O_WRONLY | O_APPEND);
	if (filename == NULL || descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[index] != '\0')
			index++;
		result = write(descriptor, text_content, index);
		if (result == -1)
		{
			close(descriptor);
			return (-1);
		}
	}
	close(descriptor);
	return (1);
}
