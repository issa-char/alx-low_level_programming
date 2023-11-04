#include "main.h"

/**
 * print_elf_header - print the ELF
 * @header: pointer to ELF
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


