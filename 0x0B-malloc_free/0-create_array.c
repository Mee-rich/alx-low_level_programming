#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memorty to print 
 * 
 * Return: Nothing.
*/

// void simple_print_buffer(char *buffer, unsigned int size)
// {
//     unsigned int i;

//     i = 0;
//     while (i < size)
//     {
//         if (i % 10)
//         {
//             printf(" ");
//         }
//         if(!(i % 10) && i)
//         {
//             printf("\n");
//         }
//         printf("0x%02x", buffer[i]);
//         i++;
//     }
//     printf("\n");
// }
/**
 * create_array - creates an array of chars and
 * initializes i with a specific char
 *
 * Return: Always 0 (success)
*/
char *create_array(int len, char c)
{
    char *s;
    int i;

    s = malloc((len +1) * sizeof(char));
    if (s == NULL)
    {
        return (NULL);
    }
    i = 0;
    while (i < len)
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return (s);
}

/**
 * main - check the code for ALX school students
 * 
 * Return: Always 0.
*/



// int main(void)
// {
//     char *buffer;

//     buffer = create_array(98, 'H');
//     if (buffer == NULL)
//     {
//         printf("failed to allocate memory\n");
//         return(1);
//     }
//     simple_print_buffer(buffer, 98);
//     free(buffer);
//     return(0);
// }