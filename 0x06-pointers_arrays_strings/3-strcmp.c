#include <stdio.h>

/**
*_strcmp - compares two string together
*@s1: A pointer varibale for the first string
*@s2: A pointer variable for the second string
*
* Return: 0 for same string , positve or negative
*/
int _strcmp(char *s1, char *s2)
{
int counter;

for (counter = 0; s1[counter] != '\0' && s2[counter] != '\0'; counter++)
{

if (s1[counter] != s2[counter])
{
return (s1[counter] - s2[counter]);
}


}
return (0);
}
