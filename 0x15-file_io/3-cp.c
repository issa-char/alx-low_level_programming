#include "main.h"

void print_error_and_exit(int code, const char *message, const char *arg)
{
		dprintf(STDERR_FILENO, message, arg);
		exit(code);
}
int main(int argc, char *argv[])
{
		if (argv != 3)
		{
				print_error_and_exit(97, "Usage: cp file_from file_to\n", NULL);
		}

		const char *file_from = argv[1];
		const char *file_to = argv[2];

		int fd_src = open(file_from, 0_RDONLY);
		if (fd_src == -1)
		{
				print_error_and_exit(98, "Error: Can't read from file %s\n", file_fr);
		}

		int fd_dst = open(file_to, 0_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_dst == -1) {
        close(fd_src);
        print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

    while ((bytes_read = read(fd_src, buffer, sizeof(buffer))) > 0) {
        bytes_written = write(fd_dst, buffer, bytes_read);
        if (bytes_written == -1) {
            close(fd_src);
            close(fd_dst);
            print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
        }
    }

    if (bytes_read == -1) {
        close(fd_src);
        close(fd_dst);
        print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
    }

    if (close(fd_src) == -1 || close(fd_dst) == -1) {
        print_error_and_exit(100, "Error: Can't close fd %d\n", errno);
    }

    return 0;
}
