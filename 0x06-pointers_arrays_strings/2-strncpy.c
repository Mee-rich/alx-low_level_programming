/**
**_strncpy - copy the content of source to destination
*@dest: stored a pointer varible to the destination string
*@src: stored a pointer variable to the source string
*@n: stored number of characters to copy
*
*Return: Return a pointer of the destination variable
*/
char *_strncpy(char *dest, char *src, int n)
{
int counter;

for (counter = 0; counter < n && src[counter] != '\0'; counter++)
{
dest[counter] = src[counter];

}
while (counter < n)
{
dest[counter] = '\0';
counter++;
}
return (dest);
}
