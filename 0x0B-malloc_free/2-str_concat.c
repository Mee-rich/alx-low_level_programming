#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * 
 * The returned pointer should point to a newly allocated space in memory 
 * which contains the contents of s1 
 * followed by the contents of s2, and null terminated.
 * 
 * if NULL is passed, treat it as an empty string
 * 
 * The function should return NULL on failure
 * 
 * Return: Always 0
*/
char *str_concat(char *s1, char *s2)
{
    char *concat;
    int i = 0, len = 0;

    if (s1 == NULL)
    {
        s1 = " ";
    }
    if (s2 = NULL)
    {
        s2 = " ";
    }

    if ((s1[i] || s2[i]) != '\0')
    {
        len++;
    }
    concat = malloc(sizeof(char) * len);

    while (s1[i] != '\0')
    {
        concat[i] = s1[i];
        i++;
    }
    while (s2[i] != '\0')
    {
        concat[++i] = s2[i];
        i++;
    }

    if (concat == NULL)
    {
        return (NULL);
    }
    s1[i] = '\0';
    return (s1);
}

/**
 * main - check the code for ALX SChool students.
 * 
 * Return: Always 0
*/
// int main(void)
// {
//     char *s;

//     s = str_concat("Betty ", "Holberton");
//     if (s == NULL)
//     {
//         printf("failed\n");
//         return (1);
//     }
//     printf("%s\n", s);
//     free(s);
//     return (0);
// }