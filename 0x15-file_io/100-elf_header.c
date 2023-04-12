#include "main.h"

/**
 * error_handles - handles errors for open, read, close, not elf file, argc
 * @val: return value of func
 * @type: type of error to handle
 * @argcv: argv[1] for err msg
*/
void error_handles(int val, int type, char *argcv)
{
	switch (type)
	{
	case 1: /* not 2 args */
		if (val != 2)
		{
			dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
			exit(98);
		}
		break;
	case 2: /* not an elf file */
		if (val == -1)
		{
			dprintf(STDERR_FILENO, "%s is not an elf file\nUsage: elf_header elf_filename\n", argcv);
			exit(98);
		}
		break;
	case 3: /* fail to operate on file */
		if (val == -1)
		{
			dprintf(STDERR_FILENO, "Error occured , file operations failed with file - %s\n", argcv);
			exit(98);
		}
		break;
	default:
		break;
	}
}

/* elf64 funcs */
/**
 * elf64_handle - check if elf file and whether 32 or 64 bit
 * @elf64: addr of struct
 * Return: -1 if not elf file, 0 if correct class, 1 for anything else
*/
int elf64_handle(Elf64_Ehdr *elf64)
{
	if (elf64->e_ident[EI_MAG0] != ELFMAG0 || elf64->e_ident[EI_MAG1] != ELFMAG1 ||
	 elf64->e_ident[EI_MAG2] != ELFMAG2 || elf64->e_ident[EI_MAG3] != ELFMAG3)
	{
		return (-1);
	}
	
	if (elf64->e_ident[EI_CLASS] == ELFCLASS64)
	{
		return (0);
	}
	return (1);
}

/**
 * osabi_64 - finds os abi
 * @e_ident: array to check osabi
 * Return: os abi or unknown
*/
char *osabi_64(unsigned char e_ident[])
{
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: return ("UNIX System V ABI");
		case ELFOSABI_HPUX: return ("HP-UX ABI");
		case ELFOSABI_NETBSD: return ("NetBSD ABI");
		case ELFOSABI_LINUX: return ("Linux ABI");
		case ELFOSABI_SOLARIS: return ("Solaris ABI");
		case ELFOSABI_IRIX: return ("IRIX ABI");
		case ELFOSABI_FREEBSD: return ("FreeBSD ABI");
		case ELFOSABI_TRU64: return ("Compaq TRU64 UNIX ABI");
		case ELFOSABI_ARM_AEABI: return ("ARM AEABI");
		case ELFOSABI_ARM: return ("ARM");
		case ELFOSABI_STANDALONE: return ("Standalone (embedded) application");
		default: return ("Unknown OS/ABI");
	}
}

/**
 * elf_type64 - find type
 * @elf_type: member of struct
 * Return: elf type or unknown
*/
char *elf_type64(uint16_t elf_type)
{
	switch (elf_type)
	{
		case ET_NONE: return ("No file type");
		case ET_REL: return ("Relocatable file");
		case ET_EXEC: return ("Executable file");
		case ET_DYN: return ("Shared object file");
		case ET_CORE: return ("Core file");
		default: return ("Unknown file type");
	}
}

/**
 * print_elf64 - prints elf header
 * @elf64: struct pointer for elf file
*/
void print_elf64(Elf64_Ehdr *elf64)
{
	int i;
	char le[] = "2's compliment, little endian";
	char be[] = "2's compliment, big endian";
	char un[] = "Unknown";
	
	printf("Elf Header:\n");
	printf("  Magic:	");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf(" %02x", elf64->e_ident[i]);
	}
	printf("\n  Class:	                          ELF64\n");
	printf("  Data:	                            %s\n", (elf64->e_ident[EI_DATA] == ELFDATA2LSB ? le :
	elf64->e_ident[EI_DATA] == ELFDATA2LSB ? be : un));
	printf("  Version:	                        %d\n", elf64->e_version);
	printf("  OS/ABI:	                        %s\n", osabi_64(elf64->e_ident));
	printf("  ABI Version:	                    %d\n", elf64->e_ident[EI_ABIVERSION]);
	printf("  Type:	                            %s\n", elf_type64(elf64->e_type));
	printf("  Entry point Address:	            0x%lx\n", elf64->e_entry);
}

/* elf32 funcs */
/**
 * elf32_handle - check if elf file and whether 32 or 64 bit
 * @elf32: addr of struct
 * Return: -1 if not elf file, 0 if correct class, 1 for anything else
*/
int elf32_handle(Elf32_Ehdr *elf32)
{
	if (elf32->e_ident[EI_MAG0] != ELFMAG0 || elf32->e_ident[EI_MAG1] != ELFMAG1 ||
	 elf32->e_ident[EI_MAG2] != ELFMAG2 || elf32->e_ident[EI_MAG3] != ELFMAG3)
	{
		return (-1);
	}
	
	if (elf32->e_ident[EI_CLASS] == ELFCLASS32)
	{
		return (0);
	}
	return (1);
}

/**
 * osabi_32 - finds os abi
 * @e_ident: array to check osabi
 * Return: os abi or unknown
*/
char *osabi_32(unsigned char e_ident[])
{
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: return ("UNIX System V ABI");
		case ELFOSABI_HPUX: return ("HP-UX ABI");
		case ELFOSABI_NETBSD: return ("NetBSD ABI");
		case ELFOSABI_LINUX: return ("Linux ABI");
		case ELFOSABI_SOLARIS: return ("Solaris ABI");
		case ELFOSABI_IRIX: return ("IRIX ABI");
		case ELFOSABI_FREEBSD: return ("FreeBSD ABI");
		case ELFOSABI_TRU64: return ("Compaq TRU64 UNIX ABI");
		case ELFOSABI_ARM_AEABI: return ("ARM AEABI");
		case ELFOSABI_ARM: return ("ARM");
		case ELFOSABI_STANDALONE: return ("Standalone (embedded) application");
		default: return ("Unknown OS/ABI");
	}
}

/**
 * elf_type32 - find type
 * @elf_type: member of struct
 * Return: elf type or unknown
*/
char *elf_type32(uint16_t elf_type)
{
	switch (elf_type)
	{
		case ET_NONE: return ("No file type");
		case ET_REL: return ("Relocatable file");
		case ET_EXEC: return ("Executable file");
		case ET_DYN: return ("Shared object file");
		case ET_CORE: return ("Core file");
		default: return ("Unknown file type");
	}
}

/**
 * print_elf32 - prints elf header
 * @elf32: struct pointer for elf file
*/
void print_elf32(Elf32_Ehdr *elf32)
{
	int i;
	char le[] = "2's compliment, little endian";
	char be[] = "2's compliment, endian";
	char un[] = "Unknown";
	
	printf("Elf Header:\n");
	printf("  Magic:	");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf(" %02x", elf32->e_ident[i]);
	}
	printf("\n  Class:	                          ELF32\n");
	printf("  Data:	                            %s\n", (elf32->e_ident[EI_DATA] == ELFDATA2LSB ? le :
	elf32->e_ident[EI_DATA] == ELFDATA2MSB ? be : un));
	printf("  Version:	                        %d\n", elf32->e_version);
	printf("  OS/ABI:	                        %s\n", osabi_32(elf32->e_ident));
	printf("  ABI Version:	                    %d\n", elf32->e_ident[EI_ABIVERSION]);
	printf("  Type:	                            %s\n", elf_type32(elf32->e_type));
	printf("  Entry point Address:	            0x%x\n", elf32->e_entry);
}

/**
 * main - Entry point
 * @ac: argc num of args
 * @av: 2d arr of args
 * Return: 0 Always (Success)
*/
int main(int ac, char **av)
{
	Elf32_Ehdr elf32;
	Elf64_Ehdr elf64;
	int fd, read_b, elf_check;

	error_handles(ac, 1, NULL);

	fd = open(av[1], O_RDONLY);
	error_handles(fd, 3, av[1]);

	read_b = read(fd, &elf32, sizeof(Elf32_Ehdr));
	error_handles(read_b, 3, av[1]);
	elf_check = elf32_handle(&elf32);
	error_handles(elf_check, 2, av[1]);
	if (elf_check == 0)
	{
		print_elf32(&elf32);
	}

	read_b = read(fd, &elf64, sizeof(Elf64_Ehdr));
	error_handles(read_b, 3, av[1]);
	elf_check = elf64_handle(&elf64);
	error_handles(elf_check, 2, av[1]);
	if (elf_check == 0)
	{
		print_elf64(&elf64);
	}
	return (0);
}

