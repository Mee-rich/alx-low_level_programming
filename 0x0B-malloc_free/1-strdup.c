#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * char *_strdup(char *str) - returns a pointer to a new string
 * which is a duplicate of the string str.
 * 
 * memory for the new string is obtained 
 * with malloc and can be freed with free.
*/
char *_strdup(char *str)
{
    char *duplicate;
    int i, len = 0;

    if (str == NULL)
    {
        return (NULL);
    }

    duplicate = malloc((len + 1) * sizeof(char));
    if (duplicate == NULL)
    {
        return(NULL);
    }

    i = 0;
    while (str[i] != '\0')
    {
        duplicate[i] = str[i];
        i++;
    }
    duplicate[i] = '\0';
    
    return (duplicate);
}

/**
 * main - check the code for ALX school students.
 * 
 * Return: Always 0.
*/
// int main(void)
// {
//     char *s;

//     s = _strdup("ALX SE");
//     if (s == NULL)
//     {
//         printf("failed to allocate memory\n");
//         return(1);
//     }
//     printf("%s\n", s);
//     free(s);
//     return (0);
// }