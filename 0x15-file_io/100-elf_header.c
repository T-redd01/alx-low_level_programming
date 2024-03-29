#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define E elf64->e_ident

/* list of funcs other than main */
void is_elf(Elf64_Ehdr *elf64, char *file_name, ssize_t fd);
void print_magic(Elf64_Ehdr *elf64);
void print_class(Elf64_Ehdr *elf64);
void print_data(Elf64_Ehdr *elf64);
void print_version(Elf64_Ehdr *elf64);
void print_os_abi(Elf64_Ehdr *elf64);
void print_abi_version(Elf64_Ehdr *elf64);
void print_type(Elf64_Ehdr *elf64);
void print_entry_point_address(Elf64_Ehdr *elf64);
/* list end */

/**
 * main - Entry point
 * @ac: number of args
 * @av: vector of args
 * Return: 0 (Success), 1 (Failed)
 */
int main(int ac, char **av)
{
	Elf64_Ehdr elf64;
	ssize_t fd, r;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_name\n", av[0]);
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Failed to open file: %s\n", av[1]);
		exit(98);
	}

	r = read(fd, &elf64, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Failed to read from file: %s\n", av[1]);
		exit(98);
	}
	is_elf(&elf64, av[1], fd); /* check if elf file */
	printf("ELF Header:\n"); /* start printing info from elf file */
	print_magic(&elf64);
	print_class(&elf64);
	print_data(&elf64);
	print_version(&elf64);
	print_os_abi(&elf64);
	print_abi_version(&elf64);
	print_type(&elf64);
	print_entry_point_address(&elf64);
	close(fd);
	return (0);
}

/**
 * is_elf - checks if av[1] is an elf file, if not exit programme
 * @elf64: elf.h struct containing file info
 * @file_name: av[1], name of file
 * @fd: file descriptor of opened file
 */
void is_elf(Elf64_Ehdr *elf64, char *file_name, ssize_t fd)
{
	int c;

	if (!elf64)
		return;

	if (E[EI_MAG0] != 127 || E[EI_MAG1] != 69 ||
			E[EI_MAG2] != 76 || E[EI_MAG3] != 70)
	{
		dprintf(STDERR_FILENO, "%s: is not an elf file\n", file_name);
		c = close(fd);
		if (c == -1)
		{
			dprintf(STDERR_FILENO, "Cannot close file: %s\n", file_name);
			exit(98);
		}
		exit(98);
	}
}

/**
 * print_magic - prints magic of elf file
 * @elf64: elf.h struct containing file info
 */
void print_magic(Elf64_Ehdr *elf64)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		if (i == 0)
		{
			printf("%02x", E[i]);
			continue;
		}
		printf(" %02x", E[i]);
	}
	printf("\n");
}

/**
 * print_class - print elf class
 * @elf64: elf.h struct containing file info
 */
void print_class(Elf64_Ehdr *elf64)
{
	if (!elf64)
		return;

	printf("  Class:                             ");
	switch (E[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n"); /* print for 32 bit */
			break;
		case ELFCLASS64:
			printf("ELF64\n"); /* print for 64 bit */
			break;
		case ELFCLASSNONE:
			printf("None\n");
			break;
		default:
			printf("<unknown: %x>\n", E[EI_CLASS]);
			break;
	}
}

/**
 * print_data - print elf data/endianess
 * @elf64: elf.h struct containing file info
 */
void print_data(Elf64_Ehdr *elf64)
{
	if (!elf64)
		return;

	printf("  Data:                              ");
	switch (E[EI_DATA])
	{
		case ELFDATANONE:
			printf("None\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("<unknown: %x>\n", E[EI_DATA]);
			break;
	}
}

/**
 * print_version - print elf version
 * @elf64: elf.h struct containing file info
 */
void print_version(Elf64_Ehdr *elf64)
{
	if (!elf64)
		return;

	printf("  Version:                           ");
	switch (E[EI_VERSION])
	{
		case EV_CURRENT:
			printf("%d (current)\n", E[EI_VERSION]);
			break;
		default:
			printf("%d\n", E[EI_VERSION]);
			break;
	}
}

/**
 * print_os_abi - print elf os/abi
 * @elf64: elf.h struct containing file info
 */
void print_os_abi(Elf64_Ehdr *elf64)
{
	if (!elf64)
		return;

	printf("  OS/ABI:                            ");
	switch (E[EI_OSABI])
	{
		case ELFOSABI_NONE:
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
			printf("UNIX - TRU64 UNIX\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone\n");
			break;
		default:
			printf("<unknown: %d>\n", E[EI_OSABI]);
			break;
	}
}

/**
 * print_abi_version - print elf abi verion
 * @elf64: elf.h struct containing file info
 */
void print_abi_version(Elf64_Ehdr *elf64)
{
	if (!elf64)
		return;

	printf("  ABI Version:                       ");
	printf("%d\n", E[EI_ABIVERSION]);
}

/**
 * print_type - print elf type
 * @elf64: elf.h struct containing file info
 */
void print_type(Elf64_Ehdr *elf64)
{
	if (!elf64)
		return;

	/*if (E[EI_DATA] == ELFDATA2MSB)
		elf64->e_type >>= 8;*/

	printf("  Type:                              ");
	switch (elf64->e_type)
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
			printf("<unknown: %x>\n", elf64->e_type);
			break;
	}
}

/**
 * print_entry_point_address - print elf entry point address
 * @elf64: elf.h struct containing file info
 */
void print_entry_point_address(Elf64_Ehdr *elf64)
{
	if (!elf64)
		return;

	/*if (E[EI_DATA] == ELFDATA2MSB)
	{
		elf64->e_entry = ((elf64->e_entry << 8) & 0xFF00FF00) |
			  ((elf64->e_entry >> 8) & 0xFF00FF);
		elf64->e_entry = (elf64->e_entry << 16) | (elf64->e_entry >> 16);
	}

	if (E[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)(elf64->e_entry));
	else
		printf("  Entry point address:               %#lx\n", elf64->e_entry);
		*/
	printf("  Entry point address:               %#lx\n", elf64->e_entry);
}

