#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/**
 * struct elf - defines a elf header
 * @ident: ident
 * @type: type
 * @machine: machine
 * @version: version
 * @entry: entry
 * @phoff: phoff
 * @shoff: shoff
 * @flags: flags
 * @ehsize: ehsize
 * @phentsize: phentsize
 * @phnum: phnum
 * @shentsize: shentsize
 * @shnum: shnum
 * @shstrndx: shstrndx
 *
 * Description: This defines a representation of a elf file.
*/

typedef struct elf
{
	unsigned char ident[16];
	unsigned short type;
	unsigned short machine;
	unsigned int version;
	unsigned long entry;
	unsigned long phoff;
	unsigned long shoff;
	unsigned int flags;
	unsigned short ehsize;
	unsigned short phentsize;
	unsigned short phnum;
	unsigned short shentsize;
	unsigned short shnum;
	unsigned short shstrndx;
} Elf32_Ehdr;

void print_elf_header(const Elf32_Ehdr *header);

#endif /* MAIN_H */
