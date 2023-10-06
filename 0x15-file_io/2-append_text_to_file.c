#include <stdio.h>

/**
 * append_text - append char
 * @filename: the file
 * @text_content: content of file
 *
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	int fd =  open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	ssize_t B_w = write(fd, text_content, strlen(text_content));

	if (B_w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
