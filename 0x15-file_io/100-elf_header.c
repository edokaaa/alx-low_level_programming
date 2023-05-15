#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * print_elf_header - a function to print the elf header
 * @header: pointer to the header
 *
 * Return: Nothing
*/
void print_elf_header(const Elf32_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", header->ident[i]);
	}
	printf("\nClass:                             ");
	switch (header->ident[4])
	{
		case 1:
			printf("ELF32\n");
			break;
		case 2:
			printf("ELF64\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("Data:                              ");
	switch (header->ident[5])
	{
		case 1:
			printf("2's complement, little-endian\n");
			break;
		case 2:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("Version:                           %u\n", header->ident[6]);
	printf("OS/ABI:                            %u\n", header->ident[7]);
	printf("ABI Version:                       %u\n", header->ident[8]);
	printf("Type:                              0x%04x\n", header->type);
	printf("Entry point address:               0x%lx\n", header->entry);
}

/**
 * main - entry point.
 * @argc: the argument count.
 * @argv: the array of arguments
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int fd = open(argv[1], O_RDONLY);
	Elf32_Ehdr header;
	ssize_t nread = read(fd, &header, sizeof(Elf32_Ehdr));

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}
	if (fd == -1)
	{
		fprintf(stderr, "Error: Failed to open file\n");
		return (98);
	}
	if (nread == -1)
	{
		fprintf(stderr, "Error: Failed to read file\n");
		close(fd);
		return (98);
	}

	if (nread != sizeof(Elf32_Ehdr) || header.ident[0] != 0x7f
		|| header.ident[1] != 'E' || header.ident[2] != 'L'
		|| header.ident[3] != 'F')
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}

	print_elf_header(&header);

	close(fd);
	return (0);
}
