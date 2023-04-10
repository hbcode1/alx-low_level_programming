#include "main.h"

/**
 * std_error - Entry point
 * program that displays the information contained
 * in the ELF header at the start of an ELF file.
 *
 * @id: array of argument passed to the program
 *
 * Return:
 *	- 0 Success.
 */

int std_error(int id)
{
	switch (id)
	{
		case 0:
			dprintf(1, "Usage: elf_filename\n");
			exit(98);
			break;
		case 1:
			dprintf(1, "open\n");
			exit(98);
			break;
		case 2:
			dprintf(1, "read\n");
			exit(98);
			break;
		default:
			dprintf(1, "close\n");
			exit(98);
			break;
	}
	return (0);
}
/**
 * main - Entry point
 * program that displays the information contained
 * in the ELF header at the start of an ELF file.
 *
 * @ac: number of arguments passed to the program
 * @av: array of argument passed to the program
 *
 * Return:
 *	- 0 Success.
 */

int main(int ac, char *av[])
{
	int file, i, c;

	Elf64_Ehdr head;
	/* Usage */
	if (ac != 2)
		std_error(0);
	/* open file */
	file = open(av[1], O_RDONLY);
	if (file < 0)
		std_error(1);
	/* read file */
	if (read(file, &head, sizeof(head)) < 0)
	{
		c = close(file);
		if (c < 1)
			std_error(3);
		std_error(2);
	}
	/* check if elf file */
	if (!(head.e_ident[0] == 0x7f && head.e_ident[1] == 'E' &&
				head.e_ident[2] == 'L' && head.e_ident[3] == 'F'))
	{
		close(file);
		if (file < 1)
			std_error(3);
		std_error(2);
	}
	/* Print header information */
	printf("ELF Header:\n");
	/* print magic number */
	printf("Magic: ");
	while (i < EI_NIDENT)
		printf("%02x ", head.e_ident[i]), i++;
	/* close file */
	close(file);
	if (file < 1)
		std_error(3);
	return (0);
}
