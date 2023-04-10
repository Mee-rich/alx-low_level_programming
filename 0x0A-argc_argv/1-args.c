#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of argument passed to the program
 *
 * @argc - number of arguments
 *
 * @argv - array of arguments
 *
 * Return: Always 0 (success)
*/

int main( int argc, char __attribute__((unused)) *argv[])
{
   printf("%d\n", --argc);

   return 0;
}