	#include "main.h"

	void print_elf_header_info(Elf64_Ehdr *header)
	{
		int i;

		printf("Magic:   ");
		for (i = 0; i < EI_NIDENT; i++)
		{
			printf("%02x ", header->e_ident[i]);
		}
		printf("\n");

		printf("Class:                             %s\n", header->e_ident
		[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
		printf("Data:                              %s\n", header->e_ident
		[EI_DATA] == ELFDATA2LSB ? "2's complement,
		little endian" : "2's complement, big endian");
		printf("Version:                           %d (current)\n", header->e_ident
		[EI_VERSION]);
		printf("OS/ABI:                            %s\n", header->e_ident
		[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
		printf("ABI Version:                       %d\n", header->e_ident
		[EI_ABIVERSION]);
		printf("Type:                              ");
		switch (header->e_type)
		{
				case ET_NONE:
				printf("NONE (No file type)\n");
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
				printf("<unknown>\n");
			}
		printf("Entry point address:               0x%lx\n",
		(unsigned long)header->e_entry);
	}


	int main(int argc, char **argv)
	{
		int fd;
		Elf64_Ehdr header;
		ssize_t read_bytes;

		if (argc != 2)
		{
			dprintf(2, "Usage: %s elf_filename\n", argv[0]);
			return (98);
		}

		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			dprintf(2, "Error: Cannot open file '%s'\n", argv[1]);
			return (98);
		}

		read_bytes = read(fd, &header, sizeof(header));

		if (read_bytes != sizeof(header)
		|| memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		{
			dprintf(2, "Error: Not an ELF file: '%s'\n", argv[1]);
			close(fd);
			return (98);
		}
		print_elf_header_info(&header);

		close(fd);
		return (0);
	}
