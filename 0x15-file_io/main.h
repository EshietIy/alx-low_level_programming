#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
void ensure_endianness(char little_e, void *data, unsigned int len);
void print_elf_header(void *h);
void print_elf_header_2(void *h);
void put_err(char *str);
#endif
