#include "main.h"

/**
 * main - copy
 * @ac: no. of arg
 * @av: arr of arg
 *
 * Return: 0
 */

int main(int ac, char **av)
{
		int fd_frm, fd_to;
		ssize_t B_read = 0, B_w;
		char buff[BUFF_SIZE];

		if (ac != 3)
		{
			dprintf(2, "usage: cp file_from file to\n");
			return (97);
		}
		fd_frm = open(av[1], O_RDONLY);
		if (fd_frm == -1)
		{
			dprintf(2, "Error: can't read from file %s\n", av[1]);
			return (98);
		}
		fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (fd_to == -1)
		{
			dprintf(2, "Error: can't write to file %s\n", av[2]);
			close(fd_frm);
			return (99);
		}
		while ((B_read == read(fd_frm, buff, BUFF_SIZE)) > 0)
		{
			B_w = write(fd_to, buff, B_read);
			if (B_w == -1)
			{
				dprintf(2, "Error: Can't write to file %s\n", av[2]);
				close(fd_frm);
				close(fd_to);
				return (99);
			}
		}
		if (B_read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			close(fd_frm);
			close(fd_to);
			return (98);
		}
		if (close(fd_frm) == -1 || close(fd_to) == -1)
		{
			dprintf(2, "Error: Can't close fd\n");
			return (100);
		}
		return (0);
}

