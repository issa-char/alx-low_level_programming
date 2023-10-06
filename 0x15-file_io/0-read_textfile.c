#include "main.h"

/**
 * read_textfile - read and print
 * @filename: pointer to file
 * @letters: no. of letters to read and print
 *
 * Return: number of characters or 0 if not opened and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t B_read;
	ssize_t B_written;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buff = (char *)malloc(letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	B_read = read(fd, buff, letters);
	if (B_read == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}

	B_written = write(STDOUT_FILENO, buff, B_read);
	close(fd);
	free(buff);
	if (B_written != B_read)
	{
		return (0);
	}

	return (B_written);

}
