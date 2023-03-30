#include <string.h>
/**
**_strcat- A function that append two strings
*@dest: it stored a pointer to the destination string
*@src: it store a pointer to the source string
*Return: A char pointer to the destination string
*/
char *_strcat(char *dest, char *src)
{
int counter;

int des_len;

int src_len;

des_len = strlen(dest);

src_len = strlen(src);

for (counter = 0; counter <= src_len; counter++)
{

dest[des_len + counter] = src[counter];

}

return (dest);

}
