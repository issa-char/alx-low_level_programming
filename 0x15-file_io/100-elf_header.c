#include "main.h"

/**
	* main - displays the information contained in the ELF header at the start of an ELF file
	* @argc: number of arguments passed to the program
	* @argv: array of arguments passed to the program
	*
	* Return: 0 on success, or an error code on failure
	*/
	int main(int argc, char **argv)
	{
		int fd, ret;
		Elf64_Ehdr header;

		if (argc != 2)
			dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]), exit(98);

		ret = read(fd, &header, sizeof(header));
		if (ret != sizeof(header) || memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
			dprintf(STDERR_FILENO, "Error: Not an ELF file - it has a different magic number.\n"), exit(98);

		print_elf_header(&header);

		ret = close(fd);
		if (ret == -1)
			dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", fd), exit(100);

		return (0);
	}

