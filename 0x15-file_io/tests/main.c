#include "main.h"

char *E_version64(int vers)
{
	if (vers >= 1)
	{
		return ("(current)");
	}
	return ("(Inavlid)");
}

char *E_data64(int type)
{
	switch (type)
	{
	case 0:
		return ("Invalid data encoding");
	case 1:
		return ("2's complement, little endian");
	case 2:
		return ("2's complement, big endian");
	default:
		return ("Null");
	}
}

char *E_type64(int type)
{
	switch (type)
	{
	case 0:
		return ("NONE (No file type)");
	case 1:
		return ("REL (Relocatable file)");
	case 2:
		return ("EXEC (Executable file)");
	case 3:
		return ("DYN (Shared object file)");
	case 4:
		return ("CORE (Core file)");
	default:
		return ("Null");
	}
}

int main(int ac, char **av)
{
	int fd, r, i;
	Elf64_Ehdr elf64;

	if (ac != 2)
	{
		printf("Usage: elf elf_filename\n");
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	r = read(fd, &elf64, sizeof(Elf64_Ehdr));
	if (fd == -1 || r == -1)
	{
		printf("File ops failed\n");
		exit(98);
	}

	printf("Magic: ");
	for (i = 0; i < 16; i++)
	{
		printf(" %02x", elf64.e_ident[i]);
	}
	printf("\n");
	printf("Class:                         ELF64\n");
	printf("Data:                          %s\n", E_data64(elf64.e_ident[EI_DATA]));
	printf("Version:                       %d %s\n", elf64.e_ident[EI_VERSION], E_version64(elf64.e_ident[EI_VERSION]));
	printf("OS/ABI:                        %d\n", elf64.e_ident[EI_OSABI]);
	printf("ABI Version:                   %d\n", elf64.e_ident[EI_ABIVERSION]);
	printf("Type:                          %s\n", E_type64(elf64.e_type));
	printf("Entry point address:           0x%06lx\n", elf64.e_entry);
	return (0);
}
