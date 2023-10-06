#include "main.h"
/**
 * create_file - create a file
 * @filename: pointer to file
 * @text_content: char of file
 *
 * Return: 1
 */

	int create_file(const char *filename, char *text_content)
	{
		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

		if (filename == NULL)
		{
			return (-1);
		}

		if (fd == -1)
		{
			return (-1);
		}

		if (t_con != NULL)
		{
			ssize_t B_wr = write(fd, t_con, strlen(t_con));

			if (B_wr == -1)
			{
				close(fd);
				return (-1);
			}
		}

		close(fd);
		return (1);
	}
