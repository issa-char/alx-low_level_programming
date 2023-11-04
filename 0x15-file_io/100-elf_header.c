#include "main.h"

/**
 * print_elf_header - prints the ELF header information
 * @header: pointer to the ELF header
 */
void print_elf_header(Elf64_Ehdr *header)
	{
		printf("ELF Header:\n");
		printf("  Magic:   ");
		for (int i = 0; i < EI_NIDENT; i++)
			printf("%02x ", header->e_ident[i]);
		printf("\n");
		printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
		printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
		printf("  Version:                           %d%s\n", header->e_ident[EI_VERSION], header->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
		printf("  OS/ABI:                            ");
		switch (header->e_ident[EI_OSABI])
		{
			case ELFOSABI_SYSV:
				printf("UNIX - System V\n");
				break;
			case ELFOSABI_HPUX:
				printf("UNIX - HP-UX\n");
				break;
			case ELFOSABI_NETBSD:
				printf("UNIX - NetBSD\n");
				break;
			case ELFOSABI_LINUX:
				printf("UNIX - Linux\n");
				break;
			case ELFOSABI_SOLARIS:
				printf("UNIX - Solaris\n");
				break;
			case ELFOSABI_IRIX:
				printf("UNIX - IRIX\n");
				break;
			case ELFOSABI_FREEBSD:
				printf("UNIX - FreeBSD\n");
				break;
			case ELFOSABI_TRU64:
				printf("UNIX - TRU64\n");
				break;
			case ELFOSABI_ARM_AEABI:
				printf("ARM EABI\n");
				break;
			default:
				printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
		}
		printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
		printf("  Type:                              ");
		switch (header->e_type)
		{
			case ET_NONE:
				printf("NONE (None)\n");
				break;
			case ET_REL:
				printf("REL (Relocatable file)\n");
				break;
			case ET_EXEC:
				printf("EXEC (Executable file)\n");
				break;
			case ET_DYN:
				printf("DYN (Shared object file)\n");
				break;
			case ET_CORE:
				printf("CORE (Core file)\n");
				break;
			default:
				printf("<unknown: %x>\n", header->e_type);
		}
		printf("  Entry point address:               %#lx\n", header->e_entry);
	}

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

