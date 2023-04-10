#include "main.h"

/**
 * main - Entry point
 * program that displays the information contained
 * in the ELF header at the start of an ELF file.
 *
 * @ac: number of arguments passed to the program
 * @ac: array of argument passed to the program
 *
 * Return:
 *	- 0 Success.
 */

int main(int ac, char *av[])
{
	int file, i;
	Elf64_Ehdr head;

	ac = ac;
	/* open file */
	file = open(av[1], O_RDONLY);
	if (file < 0)
	{
		dprintf(1, "Can't open file: %s\n", av[1]);
		exit(98);
	}
	/* read file */
	if (read(file, &head, sizeof(head)) < 0)
	{
		close(file);
		if (file < 1)
		{
			dprintf(1, "Can't close file: %s\n", av[1]);
			exit(98);
		}
		dprintf(1, "Can't read file: %s\n", av[1]);
		exit(98);
	}
	/* check if elf file */
	if (!(head.e_ident[0] == 0x7f && head.e_ident[1] == 'E' && head.e_ident[2] == 'L' && head.e_ident[3] == 'F'))
	{
		close(file);
		if (file < 1)
		{
			dprintf(1, "Can't close file: %s\n", av[1]);
			exit(98);
		}
		dprintf(1, "Unvalid file format: %s\n", av[1]);
		exit(98);
	}
	/* Print header information */
	printf("ELF Header:\n");
	/* print magic number */
	printf("Magic: ");
	while (i < EI_NIDENT)
		printf("%02x ", head.e_ident[i]), i++;
	printf("\nClass: %s\n", (head.e_ident[EI_CLASS] == ELFCLASS32) ? "32" : "64");
	printf("Data: %s\n", head.e_ident[EI_DATA] == ELFDATA2LSB ? "little" : " big");
	printf("Version: %d\n", head.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", head.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", head.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", head.e_type);
	printf("Entry point address: %#lx\n", head.e_entry & 0xffffff);

	/* close file */
	close(file);
	if (file < 1)
	{
		dprintf(1, "Can't close file: %s\n", av[1]);
		exit(98);
	}
	return (0);
}
