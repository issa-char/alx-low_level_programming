#include "main.h"

#define ELF_MAGIC 0*7f454C46

int main(int argc, char *argv[])
{
		if(argc != 2)
		{
				fprintf(stderr, "Usage: elf_header elf_filename\n");
				exit(98);
		}

		int fd = open(argv[1], O_RDONLY);
		if(fd == -1)
		{
				fprintf(stderr, Error: "Can't open file %s\n", argv[1]);
				exit(98);
		}

		lseek(fd, 0, SEEK_SET);

		struct elfhdr elf_header;
		ssize_t bytes_read = read(fd, &elf_header, sizeof(elf_header));
		if (bytes_read != sizeof(elif_header))
		{
				fprintf(stderr, "Error: Can't read ELF header from file %s\n", argv[1]);
				exit(98);
		}

		if (elf_header.e_ident[EI_MAG0} != ELF_MAGIC){
				fprintf(stderr, "Erro: File %s is not an ELF file\n", argv[1]);
				exit (98);
		}

printf(printf("Magic: %08x\n", elf_header.e_ident[EI_MAG]);
  printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
  printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
  printf("Version: %d\n", elf_header.e_version);
  printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
  printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
  printf("Type: %d\n", elf_header.e_type);
  printf("Entry point address: %#x\n", elf_header.e_entry);

  close(fd);

  exit(0);
  }


