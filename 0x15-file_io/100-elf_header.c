#include "main.h"


	void print_elf_header_info(Elf64_Ehdr *header)
	{
		printf("Magic: ");
		for (int i = 0; i < EI_NIDENT; i++)
		{
			printf("%02x", header->e_ident[i]);
		}

		printf("\n");
		printf(" Class           %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
		printf("Data: 		%S\n", header->e_indent[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
		printf("Version: 	%d (current)\n", header->e_ident[EI_VERSION]);
		printf("OS/ABI:		%S\n", header->e-e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
		Printf("ABI Version:  %d\n", header->e_indent[EI,ABIVERSION]);
		printf("Type		");

		switch (header->e_type)
		{
			case ET_NONE:	printf("NONE (No file type)\n"); break;
			case ET_REL:	printf("REL (Relocatable file)\n"); break;
			case ET_EXEC:	printf("EXEC (Executable file)\n"); break;
			case ET_DYN:	printf(DYN (Shared object file)\n); break
			case ET_CORE:	printf("CORE (Core file)\n"); break;
			default:	printf("<unkwown>\n");
		}
		printf("Entry point address:     0x%1x\n", (unsigned logn)header->e_entry);
	}
