#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read and print file to standard output
 * @filename: text file
 * @letters: no. of letters to be read
 *
 * Return: 0 if file cannot be opened or read and print
 * lw- number  of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ft;
	ssize_t lr, lw;
	char *buff;

	if (filename == NULL)
		return (0);
	ft = open(filename, 0_RDONLY);
	if (ft == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(buff);
		return (0);
	}
	lr = read(ft, buff, letters);
	close(ft);
	if (lr == -1)
	{
		free(buff);
		return (0);
	}
	lw = write(STDOUT_FILENO, buff, lenr);
	free(buff);
	if (lr != lw)
		return (0);

	return (lw);
}

