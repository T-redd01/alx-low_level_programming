#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/* elf prototypes */
void error_handles(int val, int type, char *argcv);
int elf64_handle(Elf64_Ehdr *elf64);
char *osabi_64(unsigned char e_ident[]);
char *elf_type64(uint16_t elf_type);
void print_elf64(Elf64_Ehdr *elf64);
int elf32_handle(Elf32_Ehdr *elf32);
char *osabi_32(unsigned char e_ident[]);
char *elf_type32(uint16_t elf_type);
void print_elf32(Elf32_Ehdr *elf32);

#endif
