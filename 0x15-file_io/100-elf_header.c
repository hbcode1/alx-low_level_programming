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
	FILE *file;
	ElfW(Ehdr) head;
	int i = 0;

	/* Usage */
	if (ac != 2)
	{
		dprintf(1, "Usage: %s elf_filename", av[0]);
		exit(98);
	}
	/* open file */
	file = fopen(av[1], "r");
	if (!file)
	{
		dprintf(1, "Can't open file: %s", av[1]);
          exit(98);
	}
	/* read file */
	if (fread(&head, sizeof(head), 1, file) != 1)
	{
		dprintf(1, "Can't read file: %s", av[1]);
          exit(98);
	}
	/* check if elf file */
	if (!(head.e_ident[0] == 0x7f && head.e_ident[1] == 'E' && head.e_ident[2] == 'L' && head.e_ident[3] == 'F'))
	{
		dprintf(1, "Unvalid file format: %s", av[1]);
          exit(98);
	}
	/* Print header information */
	printf("ELF Header:\n");
	/* print magic number */
	printf("Magic: ");
	while (i < EI_NIDENT)
		printf("%02x ", head.e_ident[i]), i++;
	printf("\nClass: %s\n", (head.e_ident[EI_CLASS] == ELFCLASS32) ? "32": "64");
	printf("Data: %s\n", head.e_ident[EI_DATA] == ELFDATA2LSB ? "little" : " big");
	printf("Version: %d\n", head.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", head.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", head.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", head.e_type);
	printf("Entry point address: %#lx\n", head.e_entry);

	/* close file */
	return (0);

}
