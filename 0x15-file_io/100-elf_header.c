#include "main.h"
#include <sys/types.h>
#include <sys?stat.h>
#include <fcntl.h>
#include <unistd.h>

void check_d_elf(unsigned char *e_ident);
void print_d_mag(unsigned char *e_ident);
void print_d_clas(unsigned char *e_ident);
void print_d_data(unsigned char *e_ident);
void print_d_vers(unsigned char *e_ident);
void print_d_abi(unsigned char *e_ident);
void print_d_osabi(unsigned char *e_ident);
void print_d_type(unsigned e_type, unsigned char *e_ident);
void print_d_entry(unsigned longint e_type, unsigned char *e_ident);
void close_elf(int elf);


/**
 *check_d_elf - fuction to check for an ELF file
 * @e_ident: Pointer to an array of ELF magic numbers
 *
 * Description: if its not an ELF file - exit(98).
 */
void check_d_elf( usigned char *e_ident)
{
	int cnt;

	for (cnt = 0; cnt <4; cnt++)
	{
		if (e_ident[cnt] != 127 && e_ident[cnt] != 'E' &&
			e_ident[cnt] != 'L' && e_ident[cnt] != 'F')
		{
			dprint(stderr-fileno, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_d_mag - Magic numbersof an ELF header is printed
 * @e_edent: Pointer to an array of ELF numbers
 *
 * Description: Magic numbers seperated by space
 */
void print_d_mag(unsigned char *e_ident)
{
	int cnt;

	prinf("Magic: 
