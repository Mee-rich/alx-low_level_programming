/**
**string_toupper - convert lower letters to string
*@s: Stored a pointer reference to a string
* Return: A pointer for the converted string
*/
char *string_toupper(char *s)
{

int counter;

for (counter = 0; s[counter] != '\0'; counter++)
{
if (s[counter] >= 'a' && s[counter] <= 'z')
{
s[counter] = s[counter] - 32;
}

}
return (s);
}
