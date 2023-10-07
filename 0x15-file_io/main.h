#ifndef MAIN
#define MAIN


#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#define BUFF_SIZE 1024
#include <sys/types.h>
#include <elf.h>

void print_elf_header_info(Elf64_Ehdr *header);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif
