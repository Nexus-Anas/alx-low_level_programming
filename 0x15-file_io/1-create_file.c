#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * create_file - This fun creates a file
 * @filename: name of the file
 * @text_content: the content to write
 *
 * Return: returns 1, else, -1
 */

int create_file(const char *filename, char *text_content)
{
	int descriptor;
	int result;
	int index = 0;

	descriptor = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
